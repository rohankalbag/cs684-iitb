#include <TRSensors.h>

#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <stdio.h>
#include "logic_types.h"
#include "logic.c"
#include "TRSensors.h"

#define NUM_SENSORS 5



Logic__obstavoider_mem mem;
Logic__obstavoider_out _res;

TRSensors trs =  TRSensors();

unsigned int sensor_out[NUM_SENSORS];

#define IN1 0
#define IN2 1
#define IN3 2
#define IN4 3

#define ENA 5
#define ENB 6

#define motor_left_penc 2
#define motor_right_penc  3

#define l1_ir 8
#define l2_ir 7
#define f_ir 12

int penc_l = 0, penc_r = 0;

void configure_encoder_inputs(void)
{
  DDRD &= ~(1 << motor_left_penc); //Set the direction of the PORTD 2 pin as input
  PORTD |= (1 << motor_left_penc); //Enable internal pull-up for PORTD 2 pin
  DDRD &= ~(1 << motor_right_penc); //Set the direction of the PORTD 3 pin as input
  PORTD |= (1 << motor_right_penc); //Enable internal pull-up for PORTD 3 pin
}


ISR(INT0_vect){
  penc_r++;
}

ISR(INT1_vect){
  penc_l++;
}

void position_encoder_interrupt_init (void)
{
  cli(); //Clears the global interrupt
  EICRA = EICRA | 0x0A; // INT0, INT1 is set to trigger with falling edge
  EIMSK = EIMSK | 0x03; // Enable Interrupt INT0, INT1 for left position encoder
  sei(); // Enables the global interrupt
}


void configure_motors_outputs(void){
  DDRC |= ((1 << IN1) | (1 << IN2) | (1 << IN3) | (1 << IN4));
  DDRD |= ((1 << ENA) | (1 << ENB));

  PORTD |= ((1<<ENA) | (1<<ENB));
}

void timer1_init() {//Set Register Values for starting Fast 8-bit PWM
  TCCR0A = 0xA3;
  TCCR0B = 0x03;
  TCNT0 = 0x00;
  OCR0A = 0x00;
  OCR0B = 0x00;
}
void tr_init() {
  for (int i = 0; i < 400; i++)  // make the calibration take about 10 seconds
  {
    trs.calibrate();       // reads all sensors 10 times
  }
}

void raw_velocity (unsigned char left_motor, unsigned char right_motor) {
  OCR0A = (unsigned char)left_motor;
  OCR0B = (unsigned char)right_motor; 
}

void velocity (int left_motor, int right_motor) {
  if(left_motor >= 0 && right_motor >= 0){
    PORTC &= ~((1<<IN1) | (1<<IN4) );
    PORTC |=  ((1<<IN2) | (1<<IN3) );
  }else if (left_motor <= 0 && right_motor <= 0){
    PORTC &= ~((1<<IN2) | (1<<IN3) );
    PORTC |=  ((1<<IN1)  | (1<<IN4));
  }else  if (left_motor <= 0 && right_motor >= 0){
    PORTC &= ~((1<<IN1) | (1<<IN3) );
    PORTC |=  ((1<<IN2)  | (1<<IN4));
  }else if(left_motor >= 0 && right_motor <= 0){
    PORTC &= ~((1<<IN2) | (1<<IN4) );
    PORTC |=  ((1<<IN1)  | (1<<IN3));
  }
  raw_velocity(abs(left_motor), abs(right_motor));
}


void setup()
{
  
  configure_motors_outputs();
  configure_encoder_inputs();
  position_encoder_interrupt_init();
  timer1_init();
  tr_init();
  Serial.begin(115200);
  pinMode(f_ir, INPUT);
  pinMode(l1_ir, INPUT);
  pinMode(l2_ir, INPUT);
  Logic__obstavoider_reset(&mem);
}

int sensor_min[NUM_SENSORS] = {936,  932, 944, 914, 938};
int sensor_max[NUM_SENSORS] = {952, 950, 955, 948, 952};

void loop()
{
  trs.AnalogRead(sensor_out);
  for(int i = 0; i < NUM_SENSORS; i++){
    int val = sensor_out[i];
    sensor_out[i] =  ( (double) max(0, (val - sensor_min[i]))) / (sensor_max[i] - sensor_min[i]) * 1024  ;
  }

  bool ir_d_front = !digitalRead(f_ir);
  bool ir_d_left1 = !digitalRead(l1_ir);
  bool ir_d_left2 = !digitalRead(l2_ir);
  
  Logic__obstavoider_step(ir_d_front, ir_d_left1, ir_d_left2,
                            penc_l, penc_r,
                              &_res,
                             &mem);
  velocity(_res.v_left, _res.v_right);
  Serial.println(_res.cs);


}


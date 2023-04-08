#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <stdio.h>
#include "logic.c"
#include "logic_types.h"

Logic__obstavoider_mem mem;
Logic__obstavoider_out _res;

#define IR_LEFT 4
#define IR_FRONT 4

#define IN1 0
#define IN2 1
#define IN3 2
#define IN4 3

#define ENA 5
#define ENB 6

#define motor_left_penc 2
#define motor_right_penc  3

int penc_l = 0, penc_r = 0;
void configure_encoder_inputs(void)
{
  DDRD &= ~(1 << motor_left_penc); //Set the direction of the PORTD 2 pin as input
  PORTD |= (1 << motor_left_penc); //Enable internal pull-up for PORTD 2 pin
  DDRD &= ~(1 << motor_right_penc); //Set the direction of the PORTD 3 pin as input
  PORTD |= (1 << motor_right_penc); //Enable internal pull-up for PORTD 3 pin
}

void configure_motors_outputs(void){
  DDRC |= ((1 << IN1) | (1 << IN2) | (1 << IN3) | (1 << IN4));
  DDRD |= ((1 << ENA) | (1 << ENB));

  PORTD |= ((1<<ENA) | (1<<ENB));
}

void position_encoder_interrupt_init (void)
{
  cli(); //Clears the global interrupt
  EICRA = EICRA | 0x0A; // INT0, INT1 is set to trigger with falling edge
  EIMSK = EIMSK | 0x03; // Enable Interrupt INT0, INT1 for left position encoder
  sei(); // Enables the global interrupt
}

void timer1_init() {//Set Register Values for starting Fast 8-bit PWM
  TCCR0A = 0xA3;
  TCCR0B = 0x03;
  TCNT0 = 0x00;
  OCR0A = 0x00;
  OCR0B = 0x00;
}

void velocity (unsigned char left_motor, unsigned char right_motor) {
  OCR0A = (unsigned char)left_motor;
  OCR0B = (unsigned char)right_motor; 
}

void configure_ir_sensors_inputs(void){
  DDRC &= ~(1 << IR_LEFT);
  DDRB &= ~(1 << IR_FRONT);
  PORTC |= (1 << IR_LEFT);
  PORTB |= (1 << IR_FRONT);
}



ISR(INT0_vect){
  penc_r++;
}

ISR(INT1_vect){
  penc_l++;
}

void setup()
{
  configure_encoder_inputs();
  configure_ir_sensors_inputs();
  configure_motors_outputs();

  position_encoder_interrupt_init();
  timer1_init();

  Serial.begin(9600);

  Logic__obstavoider_reset(&mem);

  PORTC &= ~((1<<IN1) | (1<<IN4) );
  PORTC |=  ((1<<IN2) | (1<<IN3) );
  // velocity(255,255);
  // delay(100);
}




void loop()
{
  int ir_d_front = !(PINB & (1 << IR_FRONT));
  int ir_d_left = !(PINC & (1 << IR_LEFT));
 
  Logic__obstavoider_step(ir_d_front, ir_d_left, penc_l, penc_r,
                                &_res,
                                &mem); 
 

  Serial.println(_res.cs);
  int dir = _res.dir;
  
  if(dir == 0){
    PORTC &= ~((1<<IN1) | (1<<IN4) );
    PORTC |=  ((1<<IN2) | (1<<IN3) );
  }else if (dir == 1){
    PORTC &= ~((1<<IN2) | (1<<IN3) );
    PORTC |=  ((1<<IN1) | (1<<IN4) );
  }else if(dir == 2){
    PORTC &= ~((1<<IN1) | (1<<IN3) );
    PORTC |=  ((1<<IN2)  | (1<<IN4));
  }else if(dir == 3){
      PORTC &= ~((1<<IN2) | (1<<IN4) );
    PORTC |=  ((1<<IN1)  | (1<<IN3));
  }
  
  velocity(_res.v_left, _res.v_right);
}


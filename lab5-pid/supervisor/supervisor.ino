#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <stdio.h>

#include "logic_types.h"
#include "logic.c"

#include "TRSensors.h"
#define NUM_SENSORS 5
TRSensors trs =   TRSensors();
unsigned int sensor_out[NUM_SENSORS];

Logic__pidline_mem mem;
Logic__pidline_out _res;

#define IN1 0
#define IN2 1
#define IN3 2
#define IN4 3

#define ENA 5
#define ENB 6

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
  timer1_init();
  tr_init();
  Serial.begin(115200);

  Logic__pidline_reset(&mem);

}



int sensor_min[NUM_SENSORS] = {936,  932, 944, 914, 938};
int sensor_max[NUM_SENSORS] = {952, 950, 955, 948, 952};
void loop()
{
  
  trs.AnalogRead(sensor_out);
  for(int i = 0; i < NUM_SENSORS; i++){
    int val = sensor_out[i];
    // sensor_out[i] =   max(0, (val - sensor_min[i]))  ;

    sensor_out[i] =  ( (double) max(0, (val - sensor_min[i]))) / (sensor_max[i] - sensor_min[i]) * 1024  ;
  }
  Logic__pidline_step(sensor_out[0],sensor_out[1],sensor_out[2],sensor_out[3],sensor_out[4],
                                &_res,
                                &mem); 
 


  // Serial.print(sensor_out[0]);
  // Serial.print("\t");
  // Serial.print(sensor_out[1]);
  // Serial.print("\t");
  // Serial.print(sensor_out[2]);
  // Serial.print("\t");
  // Serial.print(sensor_out[3]);
  // Serial.print("\t");
  // Serial.print(sensor_out[4]);
  // Serial.print("\t");
  // Serial.print(_res.out_drive);
  // Serial.print("\t");
  // Serial.println();
  // Serial.println(_res.out_drive);
  //int dir = _res.dir;
  // int dir = 0;
  // if(dir == 0){
  //   PORTC &= ~((1<<IN1) | (1<<IN4) );
  //   PORTC |=  ((1<<IN2) | (1<<IN3) );
  // }else if (dir == 1){
  //   PORTC &= ~((1<<IN2) | (1<<IN3) );
  //   PORTC |=  ((1<<IN1) | (1<<IN4) );
  // }else if(dir == 2){
  //   PORTC &= ~((1<<IN1) | (1<<IN3) );
  //   PORTC |=  ((1<<IN2)  | (1<<IN4));
  // }else if(dir == 3){
  //     PORTC &= ~((1<<IN2) | (1<<IN4) );
  //   PORTC |=  ((1<<IN1)  | (1<<IN3));
  // }
  velocity(_res.v_left, _res.v_right);
  // delay(10);
}


// #include "TRSensors.h"

// #define NUM_SENSORS 5
// // sensors 0 through 5 are connected to analog inputs 0 through 5, respectively
// TRSensors trs =   TRSensors();
// unsigned int sensorValues[NUM_SENSORS];


// void setup()
// {
//   Serial.begin(115200);
//   // Serial.println("TRSensor");

//   // Serial.println("Black Calibration");
//   // for (int i = 0; i < 400; i++)  // make the calibration take about 10 seconds
//   // {
//   //   trs.calibrate();       // reads all sensors 10 times
//   // }


//   // Serial.println("black calibrate done");
//   // delay(2000);


//   // Serial.println("White Calibration");
//   // for (int i = 0; i < 400; i++)  // make the calibration take about 10 seconds
//   // {
//   //   trs.calibrate();       // reads all sensors 10 times
//   // }

//   // Serial.println("white calibrate done");


//   // // print the calibration minimum values measured when emitters were on
//   // for (int i = 0; i < NUM_SENSORS; i++)
//   // {
//   //   Serial.print(trs.calibratedMin[i]);
//   //   Serial.print(' ');
//   // }
//   // Serial.println();
  
//   // // print the calibration maximum values measured when emitters were on
//   // for (int i = 0; i < NUM_SENSORS; i++)
//   // {
//   //   Serial.print(trs.calibratedMax[i]);
//   //   Serial.print(' ');
//   // }
//   // Serial.println();
//   // delay(1000);
// }


// void loop()
// {
//   // read calibrated sensor values and obtain a measure of the line position from 0 to 5000
//   // To get raw sensor values, call:
//   trs.AnalogRead(sensorValues); 
//   // trs.readCalibrated(sensorValues);
//   // unsigned int position = trs.readLine(sensorValues);
  
//   // print the sensor values as numbers from 0 to 1000, where 0 means maximum reflectance and
//   // 1000 means minimum reflectance, followed by the line position
//   for (unsigned char i = 0; i < NUM_SENSORS; i++)
//   {
//     Serial.print(sensorValues[i]);
//     Serial.print('\t');
//   }
//   Serial.println("\n");
//   // Serial.println(position); // comment this line out if you are using raw values
  
//  delay(250);
// }

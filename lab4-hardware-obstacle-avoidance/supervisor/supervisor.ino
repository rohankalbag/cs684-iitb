#include "Arduino.h"
#include <avr/sleep.h>
#include <stdio.h>
#include "obst_avoid.c"
#include "obst_avoid_types.h"

Obst_avoid__obstavoider_mem mem;
Obst_avoid__obstavoider_out _res;

#define IN1 A0
#define IN2 A1
#define ENA 5
#define IN3 A2
#define IN4 A3
#define ENB 6
#define PE1 2
#define PE2 3
#define IRF 12
#define IRS 13

//The setup function is called once at startup of the sketch

int lprev = 0, rprev = 0;
int lcurr = 0, rcurr = 0;
int ltrans = 0;
int rtrans = 0;
int pcount = 0;
int th1 = 9; 
int th2 = 9;
int obs_found = 0;
int first_backoff = 1;


void turnright_90(){
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  delay(500);
  while(true){
    left_trans();
    right_trans();
    digitalWrite(IN1, LOW);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    if(ltrans > th1 && rtrans > th2){
      digitalWrite(ENA, LOW);
      digitalWrite(ENB, LOW);
      rtrans = 0;
      ltrans = 0;
      break;       
    }
    else{
      analogWrite(ENA, 90);
      analogWrite(ENB, 90);       
    }
  }
  delay(500);
}


void turnleft_90(){
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  delay(500);
  while(true){
    left_trans();
    right_trans();
    digitalWrite(IN1, HIGH);
    digitalWrite(IN4, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    if(ltrans > th1 && rtrans > th2){
      digitalWrite(ENA, LOW);
      digitalWrite(ENB, LOW);
      rtrans = 0;
      ltrans = 0;
      break;       
    }
    else{
      analogWrite(ENA, 90);
      analogWrite(ENB, 90);       
    }
  }
  delay(500);
}


void setup()
{
  Serial.begin(9600);
  // Valetparker__parkingnode_reset(&mem);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(PE1, INPUT);
  pinMode(PE2, INPUT);
  pinMode(IRS, INPUT);
  pinMode(IRF, INPUT);
  rprev = digitalRead(PE1);
  lprev = digitalRead(PE2);
  Obst_avoid__obstavoider_reset(&mem);
}

// one rotation of wheel is 40 trans

void left_trans(){
  // The loop function is called in an endless loop
  lcurr = digitalRead(PE2);
  if(lprev != lcurr){
    ltrans++;
  }
  lprev = lcurr;
}

void right_trans(){
  // The loop function is called in an endless loop
  rcurr = digitalRead(PE1);
  if(rprev != rcurr){
    rtrans++;
  }
  rprev = rcurr;
}


void loop()
{
  bool irf = digitalRead(IRF) != 1;
  bool irs = digitalRead(IRS) != 1;
  Obst_avoid__obstavoider_step(irf, irs, &_res, &mem);
  Serial.println(_res.cs);
  int dir = _res.dir;
  if(dir == 0){
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);    
  }
  else if(dir == 1){
    analogWrite(ENA, 110);
    analogWrite(ENB, 110);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(100);      
  }
  else if(dir == 2){
    turnright_90();
  }
  else if(dir == 4){
    turnleft_90();
  }
  else if(dir == 6){
    analogWrite(ENA, 120);
    analogWrite(ENB, 120);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  }
  // delay(1000);  
  // Serial.println(irf);
}

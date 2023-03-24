/* --- Generated the 14/3/2023 at 0:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st_1 Logic__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_OAS")==0)) {
    return Logic__St_1_OAS;
  };
  if ((strcmp(s, "St_1_MoveDefault")==0)) {
    return Logic__St_1_MoveDefault;
  };
}

char* string_of_Logic__st_1(Logic__st_1 x, char* buf) {
  switch (x) {
    case Logic__St_1_OAS:
      strcpy(buf, "St_1_OAS");
      break;
    case Logic__St_1_MoveDefault:
      strcpy(buf, "St_1_MoveDefault");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_RightTurn_2")==0)) {
    return Logic__St_RightTurn_2;
  };
  if ((strcmp(s, "St_RightTurn_1")==0)) {
    return Logic__St_RightTurn_1;
  };
  if ((strcmp(s, "St_Reverse_1")==0)) {
    return Logic__St_Reverse_1;
  };
  if ((strcmp(s, "St_LeftTurn_2")==0)) {
    return Logic__St_LeftTurn_2;
  };
  if ((strcmp(s, "St_LeftTurn_1")==0)) {
    return Logic__St_LeftTurn_1;
  };
  if ((strcmp(s, "St_Idle")==0)) {
    return Logic__St_Idle;
  };
  if ((strcmp(s, "St_Forward_IR_2")==0)) {
    return Logic__St_Forward_IR_2;
  };
  if ((strcmp(s, "St_Forward_4")==0)) {
    return Logic__St_Forward_4;
  };
  if ((strcmp(s, "St_Forward_3")==0)) {
    return Logic__St_Forward_3;
  };
  if ((strcmp(s, "St_Forward_2")==0)) {
    return Logic__St_Forward_2;
  };
  if ((strcmp(s, "St_Forward_1")==0)) {
    return Logic__St_Forward_1;
  };
  if ((strcmp(s, "St_Delay_8")==0)) {
    return Logic__St_Delay_8;
  };
  if ((strcmp(s, "St_Delay_7")==0)) {
    return Logic__St_Delay_7;
  };
  if ((strcmp(s, "St_Delay_6")==0)) {
    return Logic__St_Delay_6;
  };
  if ((strcmp(s, "St_Delay_5")==0)) {
    return Logic__St_Delay_5;
  };
  if ((strcmp(s, "St_Delay_4")==0)) {
    return Logic__St_Delay_4;
  };
  if ((strcmp(s, "St_Delay_3")==0)) {
    return Logic__St_Delay_3;
  };
  if ((strcmp(s, "St_Delay_2")==0)) {
    return Logic__St_Delay_2;
  };
  if ((strcmp(s, "St_Delay_1")==0)) {
    return Logic__St_Delay_1;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_RightTurn_2:
      strcpy(buf, "St_RightTurn_2");
      break;
    case Logic__St_RightTurn_1:
      strcpy(buf, "St_RightTurn_1");
      break;
    case Logic__St_Reverse_1:
      strcpy(buf, "St_Reverse_1");
      break;
    case Logic__St_LeftTurn_2:
      strcpy(buf, "St_LeftTurn_2");
      break;
    case Logic__St_LeftTurn_1:
      strcpy(buf, "St_LeftTurn_1");
      break;
    case Logic__St_Idle:
      strcpy(buf, "St_Idle");
      break;
    case Logic__St_Forward_IR_2:
      strcpy(buf, "St_Forward_IR_2");
      break;
    case Logic__St_Forward_4:
      strcpy(buf, "St_Forward_4");
      break;
    case Logic__St_Forward_3:
      strcpy(buf, "St_Forward_3");
      break;
    case Logic__St_Forward_2:
      strcpy(buf, "St_Forward_2");
      break;
    case Logic__St_Forward_1:
      strcpy(buf, "St_Forward_1");
      break;
    case Logic__St_Delay_8:
      strcpy(buf, "St_Delay_8");
      break;
    case Logic__St_Delay_7:
      strcpy(buf, "St_Delay_7");
      break;
    case Logic__St_Delay_6:
      strcpy(buf, "St_Delay_6");
      break;
    case Logic__St_Delay_5:
      strcpy(buf, "St_Delay_5");
      break;
    case Logic__St_Delay_4:
      strcpy(buf, "St_Delay_4");
      break;
    case Logic__St_Delay_3:
      strcpy(buf, "St_Delay_3");
      break;
    case Logic__St_Delay_2:
      strcpy(buf, "St_Delay_2");
      break;
    case Logic__St_Delay_1:
      strcpy(buf, "St_Delay_1");
      break;
    default:
      break;
  };
  return buf;
}


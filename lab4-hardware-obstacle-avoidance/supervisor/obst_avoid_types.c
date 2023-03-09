/* --- Generated the 9/3/2023 at 19:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts obst_avoid.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "obst_avoid_types.h"

Obst_avoid__st_1 Obst_avoid__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_OAS")==0)) {
    return Obst_avoid__St_1_OAS;
  };
  if ((strcmp(s, "St_1_Move")==0)) {
    return Obst_avoid__St_1_Move;
  };
}

char* string_of_Obst_avoid__st_1(Obst_avoid__st_1 x, char* buf) {
  switch (x) {
    case Obst_avoid__St_1_OAS:
      strcpy(buf, "St_1_OAS");
      break;
    case Obst_avoid__St_1_Move:
      strcpy(buf, "St_1_Move");
      break;
    default:
      break;
  };
  return buf;
}

Obst_avoid__st Obst_avoid__st_of_string(char* s) {
  if ((strcmp(s, "St_SecondTurnLeft")==0)) {
    return Obst_avoid__St_SecondTurnLeft;
  };
  if ((strcmp(s, "St_SecondMoveFront")==0)) {
    return Obst_avoid__St_SecondMoveFront;
  };
  if ((strcmp(s, "St_MoveLittleFront")==0)) {
    return Obst_avoid__St_MoveLittleFront;
  };
  if ((strcmp(s, "St_MoveLittleBitFront3")==0)) {
    return Obst_avoid__St_MoveLittleBitFront3;
  };
  if ((strcmp(s, "St_MoveLittleBitFront2")==0)) {
    return Obst_avoid__St_MoveLittleBitFront2;
  };
  if ((strcmp(s, "St_MoveFront")==0)) {
    return Obst_avoid__St_MoveFront;
  };
  if ((strcmp(s, "St_FirstTurnLeft")==0)) {
    return Obst_avoid__St_FirstTurnLeft;
  };
  if ((strcmp(s, "St_FirstRightTurn")==0)) {
    return Obst_avoid__St_FirstRightTurn;
  };
  if ((strcmp(s, "St_FinalRight")==0)) {
    return Obst_avoid__St_FinalRight;
  };
  if ((strcmp(s, "St_FinalFront")==0)) {
    return Obst_avoid__St_FinalFront;
  };
  if ((strcmp(s, "St_Exit")==0)) {
    return Obst_avoid__St_Exit;
  };
  if ((strcmp(s, "St_Brake")==0)) {
    return Obst_avoid__St_Brake;
  };
}

char* string_of_Obst_avoid__st(Obst_avoid__st x, char* buf) {
  switch (x) {
    case Obst_avoid__St_SecondTurnLeft:
      strcpy(buf, "St_SecondTurnLeft");
      break;
    case Obst_avoid__St_SecondMoveFront:
      strcpy(buf, "St_SecondMoveFront");
      break;
    case Obst_avoid__St_MoveLittleFront:
      strcpy(buf, "St_MoveLittleFront");
      break;
    case Obst_avoid__St_MoveLittleBitFront3:
      strcpy(buf, "St_MoveLittleBitFront3");
      break;
    case Obst_avoid__St_MoveLittleBitFront2:
      strcpy(buf, "St_MoveLittleBitFront2");
      break;
    case Obst_avoid__St_MoveFront:
      strcpy(buf, "St_MoveFront");
      break;
    case Obst_avoid__St_FirstTurnLeft:
      strcpy(buf, "St_FirstTurnLeft");
      break;
    case Obst_avoid__St_FirstRightTurn:
      strcpy(buf, "St_FirstRightTurn");
      break;
    case Obst_avoid__St_FinalRight:
      strcpy(buf, "St_FinalRight");
      break;
    case Obst_avoid__St_FinalFront:
      strcpy(buf, "St_FinalFront");
      break;
    case Obst_avoid__St_Exit:
      strcpy(buf, "St_Exit");
      break;
    case Obst_avoid__St_Brake:
      strcpy(buf, "St_Brake");
      break;
    default:
      break;
  };
  return buf;
}


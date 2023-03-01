/* --- Generated the 1/3/2023 at 16:34 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s parkingnode -hepts valetparker.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "valetparker_types.h"

Valetparker__st_1 Valetparker__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_StopState")==0)) {
    return Valetparker__St_1_StopState;
  };
  if ((strcmp(s, "St_1_StartState")==0)) {
    return Valetparker__St_1_StartState;
  };
  if ((strcmp(s, "St_1_PID")==0)) {
    return Valetparker__St_1_PID;
  };
  if ((strcmp(s, "St_1_OAS")==0)) {
    return Valetparker__St_1_OAS;
  };
}

char* string_of_Valetparker__st_1(Valetparker__st_1 x, char* buf) {
  switch (x) {
    case Valetparker__St_1_StopState:
      strcpy(buf, "St_1_StopState");
      break;
    case Valetparker__St_1_StartState:
      strcpy(buf, "St_1_StartState");
      break;
    case Valetparker__St_1_PID:
      strcpy(buf, "St_1_PID");
      break;
    case Valetparker__St_1_OAS:
      strcpy(buf, "St_1_OAS");
      break;
    default:
      break;
  };
  return buf;
}

Valetparker__st Valetparker__st_of_string(char* s) {
  if ((strcmp(s, "St_UnalignMoveBack")==0)) {
    return Valetparker__St_UnalignMoveBack;
  };
  if ((strcmp(s, "St_SecondImmediateRightTurn")==0)) {
    return Valetparker__St_SecondImmediateRightTurn;
  };
  if ((strcmp(s, "St_MoveRightTillWhiteLine")==0)) {
    return Valetparker__St_MoveRightTillWhiteLine;
  };
  if ((strcmp(s, "St_MoveBack")==0)) {
    return Valetparker__St_MoveBack;
  };
  if ((strcmp(s, "St_MaintainWallAlign")==0)) {
    return Valetparker__St_MaintainWallAlign;
  };
  if ((strcmp(s, "St_FirstImmediateRightTurn")==0)) {
    return Valetparker__St_FirstImmediateRightTurn;
  };
  if ((strcmp(s, "St_BotIsOnLine")==0)) {
    return Valetparker__St_BotIsOnLine;
  };
}

char* string_of_Valetparker__st(Valetparker__st x, char* buf) {
  switch (x) {
    case Valetparker__St_UnalignMoveBack:
      strcpy(buf, "St_UnalignMoveBack");
      break;
    case Valetparker__St_SecondImmediateRightTurn:
      strcpy(buf, "St_SecondImmediateRightTurn");
      break;
    case Valetparker__St_MoveRightTillWhiteLine:
      strcpy(buf, "St_MoveRightTillWhiteLine");
      break;
    case Valetparker__St_MoveBack:
      strcpy(buf, "St_MoveBack");
      break;
    case Valetparker__St_MaintainWallAlign:
      strcpy(buf, "St_MaintainWallAlign");
      break;
    case Valetparker__St_FirstImmediateRightTurn:
      strcpy(buf, "St_FirstImmediateRightTurn");
      break;
    case Valetparker__St_BotIsOnLine:
      strcpy(buf, "St_BotIsOnLine");
      break;
    default:
      break;
  };
  return buf;
}


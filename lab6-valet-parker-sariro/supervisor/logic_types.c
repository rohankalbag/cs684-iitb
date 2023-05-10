/* --- Generated the 10/4/2023 at 3:9 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 23:14:49 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st_5 Logic__st_5_of_string(char* s) {
  if ((strcmp(s, "St_5_WhiteLineFollower")==0)) {
    return Logic__St_5_WhiteLineFollower;
  };
  if ((strcmp(s, "St_5_StartState")==0)) {
    return Logic__St_5_StartState;
  };
}

char* string_of_Logic__st_5(Logic__st_5 x, char* buf) {
  switch (x) {
    case Logic__St_5_WhiteLineFollower:
      strcpy(buf, "St_5_WhiteLineFollower");
      break;
    case Logic__St_5_StartState:
      strcpy(buf, "St_5_StartState");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_4 Logic__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_ObstacleAvoider")==0)) {
    return Logic__St_4_ObstacleAvoider;
  };
  if ((strcmp(s, "St_4_LineFollowing")==0)) {
    return Logic__St_4_LineFollowing;
  };
}

char* string_of_Logic__st_4(Logic__st_4 x, char* buf) {
  switch (x) {
    case Logic__St_4_ObstacleAvoider:
      strcpy(buf, "St_4_ObstacleAvoider");
      break;
    case Logic__St_4_LineFollowing:
      strcpy(buf, "St_4_LineFollowing");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_3 Logic__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_RightTurn_1")==0)) {
    return Logic__St_3_RightTurn_1;
  };
  if ((strcmp(s, "St_3_LineFollowing")==0)) {
    return Logic__St_3_LineFollowing;
  };
  if ((strcmp(s, "St_3_Forward_1")==0)) {
    return Logic__St_3_Forward_1;
  };
  if ((strcmp(s, "St_3_ExitState")==0)) {
    return Logic__St_3_ExitState;
  };
}

char* string_of_Logic__st_3(Logic__st_3 x, char* buf) {
  switch (x) {
    case Logic__St_3_RightTurn_1:
      strcpy(buf, "St_3_RightTurn_1");
      break;
    case Logic__St_3_LineFollowing:
      strcpy(buf, "St_3_LineFollowing");
      break;
    case Logic__St_3_Forward_1:
      strcpy(buf, "St_3_Forward_1");
      break;
    case Logic__St_3_ExitState:
      strcpy(buf, "St_3_ExitState");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_2 Logic__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_Reverse_2")==0)) {
    return Logic__St_2_Reverse_2;
  };
  if ((strcmp(s, "St_2_Reverse_1")==0)) {
    return Logic__St_2_Reverse_1;
  };
  if ((strcmp(s, "St_2_PIDWallFollower")==0)) {
    return Logic__St_2_PIDWallFollower;
  };
  if ((strcmp(s, "St_2_LeftTurn_1")==0)) {
    return Logic__St_2_LeftTurn_1;
  };
  if ((strcmp(s, "St_2_ExitState")==0)) {
    return Logic__St_2_ExitState;
  };
  if ((strcmp(s, "St_2_Delay_2")==0)) {
    return Logic__St_2_Delay_2;
  };
}

char* string_of_Logic__st_2(Logic__st_2 x, char* buf) {
  switch (x) {
    case Logic__St_2_Reverse_2:
      strcpy(buf, "St_2_Reverse_2");
      break;
    case Logic__St_2_Reverse_1:
      strcpy(buf, "St_2_Reverse_1");
      break;
    case Logic__St_2_PIDWallFollower:
      strcpy(buf, "St_2_PIDWallFollower");
      break;
    case Logic__St_2_LeftTurn_1:
      strcpy(buf, "St_2_LeftTurn_1");
      break;
    case Logic__St_2_ExitState:
      strcpy(buf, "St_2_ExitState");
      break;
    case Logic__St_2_Delay_2:
      strcpy(buf, "St_2_Delay_2");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_1 Logic__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_OnLine")==0)) {
    return Logic__St_1_OnLine;
  };
  if ((strcmp(s, "St_1_NotOnLine")==0)) {
    return Logic__St_1_NotOnLine;
  };
}

char* string_of_Logic__st_1(Logic__st_1 x, char* buf) {
  switch (x) {
    case Logic__St_1_OnLine:
      strcpy(buf, "St_1_OnLine");
      break;
    case Logic__St_1_NotOnLine:
      strcpy(buf, "St_1_NotOnLine");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_OnLine")==0)) {
    return Logic__St_OnLine;
  };
  if ((strcmp(s, "St_NotOnLine")==0)) {
    return Logic__St_NotOnLine;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_OnLine:
      strcpy(buf, "St_OnLine");
      break;
    case Logic__St_NotOnLine:
      strcpy(buf, "St_NotOnLine");
      break;
    default:
      break;
  };
  return buf;
}


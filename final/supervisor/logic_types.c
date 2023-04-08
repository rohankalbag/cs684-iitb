/* --- Generated the 9/4/2023 at 4:23 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st_2 Logic__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_WhiteLineFollower")==0)) {
    return Logic__St_2_WhiteLineFollower;
  };
  if ((strcmp(s, "St_2_StartState")==0)) {
    return Logic__St_2_StartState;
  };
}

char* string_of_Logic__st_2(Logic__st_2 x, char* buf) {
  switch (x) {
    case Logic__St_2_WhiteLineFollower:
      strcpy(buf, "St_2_WhiteLineFollower");
      break;
    case Logic__St_2_StartState:
      strcpy(buf, "St_2_StartState");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st_1 Logic__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_ObstacleAvoider")==0)) {
    return Logic__St_1_ObstacleAvoider;
  };
  if ((strcmp(s, "St_1_LineFollowing")==0)) {
    return Logic__St_1_LineFollowing;
  };
}

char* string_of_Logic__st_1(Logic__st_1 x, char* buf) {
  switch (x) {
    case Logic__St_1_ObstacleAvoider:
      strcpy(buf, "St_1_ObstacleAvoider");
      break;
    case Logic__St_1_LineFollowing:
      strcpy(buf, "St_1_LineFollowing");
      break;
    default:
      break;
  };
  return buf;
}

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_Reverse_1")==0)) {
    return Logic__St_Reverse_1;
  };
  if ((strcmp(s, "St_PIDWallFollower")==0)) {
    return Logic__St_PIDWallFollower;
  };
  if ((strcmp(s, "St_LeftTurn_1")==0)) {
    return Logic__St_LeftTurn_1;
  };
  if ((strcmp(s, "St_ExitState")==0)) {
    return Logic__St_ExitState;
  };
  if ((strcmp(s, "St_Delay_2")==0)) {
    return Logic__St_Delay_2;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_Reverse_1:
      strcpy(buf, "St_Reverse_1");
      break;
    case Logic__St_PIDWallFollower:
      strcpy(buf, "St_PIDWallFollower");
      break;
    case Logic__St_LeftTurn_1:
      strcpy(buf, "St_LeftTurn_1");
      break;
    case Logic__St_ExitState:
      strcpy(buf, "St_ExitState");
      break;
    case Logic__St_Delay_2:
      strcpy(buf, "St_Delay_2");
      break;
    default:
      break;
  };
  return buf;
}


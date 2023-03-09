/* --- Generated the 9/3/2023 at 19:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts obst_avoid.ept --- */

#ifndef OBST_AVOID_TYPES_H
#define OBST_AVOID_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Obst_avoid__St_1_OAS,
  Obst_avoid__St_1_Move
} Obst_avoid__st_1;

Obst_avoid__st_1 Obst_avoid__st_1_of_string(char* s);

char* string_of_Obst_avoid__st_1(Obst_avoid__st_1 x, char* buf);

typedef enum {
  Obst_avoid__St_SecondTurnLeft,
  Obst_avoid__St_SecondMoveFront,
  Obst_avoid__St_MoveLittleFront,
  Obst_avoid__St_MoveLittleBitFront3,
  Obst_avoid__St_MoveLittleBitFront2,
  Obst_avoid__St_MoveFront,
  Obst_avoid__St_FirstTurnLeft,
  Obst_avoid__St_FirstRightTurn,
  Obst_avoid__St_FinalRight,
  Obst_avoid__St_FinalFront,
  Obst_avoid__St_Exit,
  Obst_avoid__St_Brake
} Obst_avoid__st;

Obst_avoid__st Obst_avoid__st_of_string(char* s);

char* string_of_Obst_avoid__st(Obst_avoid__st x, char* buf);

#endif // OBST_AVOID_TYPES_H

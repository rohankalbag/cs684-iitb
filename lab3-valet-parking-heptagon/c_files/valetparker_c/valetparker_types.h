/* --- Generated the 1/3/2023 at 16:34 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s parkingnode -hepts valetparker.ept --- */

#ifndef VALETPARKER_TYPES_H
#define VALETPARKER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Valetparker__St_1_StopState,
  Valetparker__St_1_StartState,
  Valetparker__St_1_PID,
  Valetparker__St_1_OAS
} Valetparker__st_1;

Valetparker__st_1 Valetparker__st_1_of_string(char* s);

char* string_of_Valetparker__st_1(Valetparker__st_1 x, char* buf);

typedef enum {
  Valetparker__St_UnalignMoveBack,
  Valetparker__St_SecondImmediateRightTurn,
  Valetparker__St_MoveRightTillWhiteLine,
  Valetparker__St_MoveBack,
  Valetparker__St_MaintainWallAlign,
  Valetparker__St_FirstImmediateRightTurn,
  Valetparker__St_BotIsOnLine
} Valetparker__st;

Valetparker__st Valetparker__st_of_string(char* s);

char* string_of_Valetparker__st(Valetparker__st x, char* buf);

static const int Valetparker__white_line_threshold = 400;

static const int Valetparker__ir_obstacle_threshold = 400;

static const int Valetparker__ir_turn_right_threshold = 400;

static const int Valetparker__ir_wall_dist_threshold = 400;

static const int Valetparker__kp_inv = 1;

static const int Valetparker__ki_inv = 1000;

static const int Valetparker__kd_inv = 10000000;

#endif // VALETPARKER_TYPES_H

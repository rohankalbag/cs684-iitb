/* --- Generated the 14/3/2023 at 0:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts Logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Logic__St_1_OAS,
  Logic__St_1_MoveDefault
} Logic__st_1;

Logic__st_1 Logic__st_1_of_string(char* s);

char* string_of_Logic__st_1(Logic__st_1 x, char* buf);

typedef enum {
  Logic__St_RightTurn_2,
  Logic__St_RightTurn_1,
  Logic__St_Reverse_1,
  Logic__St_LeftTurn_2,
  Logic__St_LeftTurn_1,
  Logic__St_Idle,
  Logic__St_Forward_IR_2,
  Logic__St_Forward_4,
  Logic__St_Forward_3,
  Logic__St_Forward_2,
  Logic__St_Forward_1,
  Logic__St_Delay_8,
  Logic__St_Delay_7,
  Logic__St_Delay_6,
  Logic__St_Delay_5,
  Logic__St_Delay_4,
  Logic__St_Delay_3,
  Logic__St_Delay_2,
  Logic__St_Delay_1
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

static const int Logic__rev_count = 5;

static const int Logic__fwd_count_1 = 15;

static const int Logic__fwd_count_2 = 5;

static const int Logic__fwd_count_3 = 10;

static const int Logic__init_right_turn_count = 13;

static const int Logic__init_left_turn_count = 12;

static const int Logic__fwd_speed = 150;

static const int Logic__rev_speed = 80;

static const int Logic__right_turn_speed = 90;

static const int Logic__left_turn_speed = 90;

static const int Logic__wall_kp_i = 10;

#endif // LOGIC_TYPES_H

/* --- Generated the 9/4/2023 at 1:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Logic__St_PIDFollower
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

static const int Logic__rev_count = 5;

static const int Logic__init_right_turn_count = 13;

static const int Logic__rev_speed = 80;

static const int Logic__right_turn_speed = 90;

static const int Logic__left_turn_speed = 90;

static const int Logic__diff_offset = 5;

static const int Logic__pid_fwd_speed = 80;

static const int Logic__fwd_speed = 40;

static const int Logic__i_kp = 1;

static const int Logic__i_kd = 120;

static const int Logic__i_ki = 10000;

static const int Logic__max_drive = 110;

#endif // LOGIC_TYPES_H

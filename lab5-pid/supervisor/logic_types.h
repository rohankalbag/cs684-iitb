/* --- Generated the 26/3/2023 at 19:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Logic__St_Start,
  Logic__St_ReachedDest,
  Logic__St_PIDFollower
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

static const int Logic__start_fwd_speed = 70;

static const int Logic__pid_fwd_speed = 40;

static const int Logic__white_threshold = 400;

static const int Logic__black_threshold = 10000;

static const int Logic__w_far = 2;

static const int Logic__w_cent = 30;

static const int Logic__i_kp = 1;

static const int Logic__i_kd = 140;

static const int Logic__i_ki = 10000;

static const int Logic__max_drive = 110;

#endif // LOGIC_TYPES_H

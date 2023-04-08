/* --- Generated the 9/4/2023 at 4:7 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Logic__St_2_WhiteLineFollower,
  Logic__St_2_StartState
} Logic__st_2;

Logic__st_2 Logic__st_2_of_string(char* s);

char* string_of_Logic__st_2(Logic__st_2 x, char* buf);

typedef enum {
  Logic__St_1_ObstacleAvoider,
  Logic__St_1_LineFollowing
} Logic__st_1;

Logic__st_1 Logic__st_1_of_string(char* s);

char* string_of_Logic__st_1(Logic__st_1 x, char* buf);

typedef enum {
  Logic__St_Reverse_1,
  Logic__St_PIDWallFollower,
  Logic__St_LeftTurn_1,
  Logic__St_ExitState,
  Logic__St_Delay_2,
  Logic__St_Delay_1
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

static const int Logic__white_threshold = 800;

static const int Logic__start_fwd_speed = 70;

static const int Logic__rev_count = 5;

static const int Logic__init_left_turn_count = 13;

static const int Logic__rev_speed = 80;

static const int Logic__right_turn_speed = 90;

static const int Logic__left_turn_speed = 90;

static const int Logic__pid_fwd_speed_wall = 80;

static const int Logic__i_kp_wall = 1;

static const int Logic__i_kd_wall = 120;

static const int Logic__i_ki_wall = 10000;

static const int Logic__max_drive_wall = 110;

static const int Logic__i_kp_line = 1;

static const int Logic__i_kd_line = 140;

static const int Logic__i_ki_line = 10000;

static const int Logic__w_far = 2;

static const int Logic__w_cent = 30;

static const int Logic__pid_fwd_speed_line = 40;

static const int Logic__max_drive_line = 110;

#endif // LOGIC_TYPES_H

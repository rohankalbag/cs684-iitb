/* --- Generated the 10/4/2023 at 3:9 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 23:14:49 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#ifndef LOGIC_TYPES_H
#define LOGIC_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Logic__St_5_WhiteLineFollower,
  Logic__St_5_StartState
} Logic__st_5;

Logic__st_5 Logic__st_5_of_string(char* s);

char* string_of_Logic__st_5(Logic__st_5 x, char* buf);

typedef enum {
  Logic__St_4_ObstacleAvoider,
  Logic__St_4_LineFollowing
} Logic__st_4;

Logic__st_4 Logic__st_4_of_string(char* s);

char* string_of_Logic__st_4(Logic__st_4 x, char* buf);

typedef enum {
  Logic__St_3_RightTurn_1,
  Logic__St_3_LineFollowing,
  Logic__St_3_Forward_1,
  Logic__St_3_ExitState
} Logic__st_3;

Logic__st_3 Logic__st_3_of_string(char* s);

char* string_of_Logic__st_3(Logic__st_3 x, char* buf);

typedef enum {
  Logic__St_2_Reverse_2,
  Logic__St_2_Reverse_1,
  Logic__St_2_PIDWallFollower,
  Logic__St_2_LeftTurn_1,
  Logic__St_2_ExitState,
  Logic__St_2_Delay_2
} Logic__st_2;

Logic__st_2 Logic__st_2_of_string(char* s);

char* string_of_Logic__st_2(Logic__st_2 x, char* buf);

typedef enum {
  Logic__St_1_OnLine,
  Logic__St_1_NotOnLine
} Logic__st_1;

Logic__st_1 Logic__st_1_of_string(char* s);

char* string_of_Logic__st_1(Logic__st_1 x, char* buf);

typedef enum {
  Logic__St_OnLine,
  Logic__St_NotOnLine
} Logic__st;

Logic__st Logic__st_of_string(char* s);

char* string_of_Logic__st(Logic__st x, char* buf);

static const int Logic__white_threshold = 780;

static const int Logic__black_white_threshold = 500;

static const int Logic__start_fwd_speed = 70;

static const int Logic__fwd_count = 10;

static const int Logic__fwd_count_1 = 10;

static const int Logic__rev_count = 3;

static const int Logic__init_left_turn_count = 10;

static const int Logic__init_right_turn_count = 3;

static const int Logic__rev_speed = 110;

static const int Logic__fwd_speed = 80;

static const int Logic__fwd_speed_1 = 80;

static const int Logic__right_turn_speed = 90;

static const int Logic__left_turn_speed = 110;

static const int Logic__pid_fwd_speed_wall = 60;

static const int Logic__i_kp_wall = 1;

static const int Logic__i_kd_wall = 120;

static const int Logic__i_ki_wall = 10000;

static const int Logic__max_drive_wall = 130;

static const int Logic__white_threshold_wall = 960;

static const int Logic__i_kp_line = 2;

static const int Logic__i_kd_line = 200;

static const int Logic__i_ki_line = 10000;

static const int Logic__w_far = 6;

static const int Logic__w_cent = 30;

static const int Logic__pid_fwd_speed_line = 90;

static const int Logic__pid_fwd_black_speed_line = 70;

static const int Logic__max_drive_line = 110;

static const int Logic__pid_rev_count = 1;

static const int Logic__pid_rev_speed = 90;

static const int Logic__up_cap = 1024;

#endif // LOGIC_TYPES_H

/* --- Generated the 9/4/2023 at 1:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__obstavoider_mem {
  int v_8;
  int v_6;
  int v_4;
  int v_2;
  Logic__st ck;
  int pnr;
  int current_state_1;
} Logic__obstavoider_mem;

typedef struct Logic__obstavoider_out {
  int v_left;
  int v_right;
  int cs;
} Logic__obstavoider_out;

void Logic__obstavoider_reset(Logic__obstavoider_mem* self);

void Logic__obstavoider_step(int ir_d_front, int ir_d_left1, int ir_d_left2,
                             int penc_l, int penc_r,
                             Logic__obstavoider_out* _out,
                             Logic__obstavoider_mem* self);

#endif // LOGIC_H

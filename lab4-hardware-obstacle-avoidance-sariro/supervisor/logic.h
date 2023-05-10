/* --- Generated the 8/4/2023 at 21:38 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts Logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__obstavoider_mem {
  Logic__st_1 ck;
  int v_6;
  int v_3;
  int v_13;
  int v_9;
  int v_19;
  int v_16;
  int v_33;
  int v_29;
  int v_28;
  int v_24;
  int v_40;
  int v_37;
  int v_47;
  int v_43;
  int v_53;
  int v_50;
  int v_67;
  int v_63;
  int v_62;
  int v_58;
  int v_85;
  int v_81;
  int v_80;
  int v_76;
  int v_92;
  int v_89;
  int v_99;
  int v_95;
  int v_105;
  int v_102;
  int v_119;
  int v_115;
  int v_114;
  int v_110;
  int v_126;
  int v_123;
  int v_133;
  int v_129;
  int v_139;
  int v_136;
  int v_153;
  int v_149;
  int v_148;
  int v_144;
  Logic__st v_156;
  int v_157;
  int pnr_1;
  int penc_r_target_1;
  int penc_l_target_1;
  int current_state_1;
  int timer_1;
  int oas_busy_1;
} Logic__obstavoider_mem;

typedef struct Logic__obstavoider_out {
  int dir;
  int v_left;
  int v_right;
  int cs;
} Logic__obstavoider_out;

void Logic__obstavoider_reset(Logic__obstavoider_mem* self);

void Logic__obstavoider_step(int ir_d_front, int ir_d_left, int penc_l,
                             int penc_r, Logic__obstavoider_out* _out,
                             Logic__obstavoider_mem* self);

#endif // LOGIC_H

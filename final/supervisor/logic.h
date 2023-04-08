/* --- Generated the 9/4/2023 at 4:23 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__pidline_mem {
  int v_10;
  int v_9;
  int v_7;
  int v_6;
} Logic__pidline_mem;

typedef struct Logic__pidline_out {
  int v_left;
  int v_right;
} Logic__pidline_out;

void Logic__pidline_reset(Logic__pidline_mem* self);

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         Logic__pidline_out* _out, Logic__pidline_mem* self);

typedef struct Logic__pidwallalign_mem {
  int v_25;
  int v_24;
  int v_22;
  int v_21;
} Logic__pidwallalign_mem;

typedef struct Logic__pidwallalign_out {
  int v_left;
  int v_right;
} Logic__pidwallalign_out;

void Logic__pidwallalign_reset(Logic__pidwallalign_mem* self);

void Logic__pidwallalign_step(int ir_d_left1, int ir_d_left2,
                              Logic__pidwallalign_out* _out,
                              Logic__pidwallalign_mem* self);

typedef struct Logic__obstacleavoider_mem {
  int v_37;
  int v_35;
  int v_43;
  int v_40;
  int v_55;
  int v_52;
  int v_51;
  int v_48;
  Logic__st ck;
  int pnr;
  int penc_r_target_1;
  int penc_l_target_1;
  int timer_1;
  Logic__pidwallalign_mem pidwallalign;
} Logic__obstacleavoider_mem;

typedef struct Logic__obstacleavoider_out {
  int v_left;
  int v_right;
  int oas_done;
} Logic__obstacleavoider_out;

void Logic__obstacleavoider_reset(Logic__obstacleavoider_mem* self);

void Logic__obstacleavoider_step(int ir_d_left1, int ir_d_left2,
                                 int white_line, int penc_l, int penc_r,
                                 Logic__obstacleavoider_out* _out,
                                 Logic__obstacleavoider_mem* self);

typedef struct Logic__finallogic_mem {
  Logic__st_1 v_65;
  int v_66;
  Logic__st_2 ck;
  int pnr_1;
  int current_state_1;
  Logic__obstacleavoider_mem obstacleavoider;
  Logic__pidline_mem pidline;
} Logic__finallogic_mem;

typedef struct Logic__finallogic_out {
  int v_left;
  int v_right;
  int cs;
} Logic__finallogic_out;

void Logic__finallogic_reset(Logic__finallogic_mem* self);

void Logic__finallogic_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                            int penc_l, int penc_r, int ir_d_front,
                            int ir_d_left1, int ir_d_left2,
                            Logic__finallogic_out* _out,
                            Logic__finallogic_mem* self);

#endif // LOGIC_H

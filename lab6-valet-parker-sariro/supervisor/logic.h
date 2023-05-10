/* --- Generated the 10/4/2023 at 3:9 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 23:14:49 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__pidline_mem {
  Logic__st ck;
  int v_10;
  int v_9;
  int v_7;
  int v_6;
  int pnr;
} Logic__pidline_mem;

typedef struct Logic__pidline_out {
  int v_left;
  int v_right;
} Logic__pidline_out;

void Logic__pidline_reset(Logic__pidline_mem* self);

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         int penc_l, int penc_r, Logic__pidline_out* _out,
                         Logic__pidline_mem* self);

typedef struct Logic__pidline_black_mem {
  Logic__st_1 ck;
  int v_58;
  int v_57;
  int v_55;
  int v_54;
  int pnr;
} Logic__pidline_black_mem;

typedef struct Logic__pidline_black_out {
  int v_left;
  int v_right;
} Logic__pidline_black_out;

void Logic__pidline_black_reset(Logic__pidline_black_mem* self);

void Logic__pidline_black_step(int bcfr, int bccr, int bccc, int bccl,
                               int bcfl, int penc_l, int penc_r,
                               Logic__pidline_black_out* _out,
                               Logic__pidline_black_mem* self);

typedef struct Logic__pidwallalign_mem {
  int v_93;
  int v_92;
  int v_90;
  int v_89;
} Logic__pidwallalign_mem;

typedef struct Logic__pidwallalign_out {
  int v_left;
  int v_right;
} Logic__pidwallalign_out;

void Logic__pidwallalign_reset(Logic__pidwallalign_mem* self);

void Logic__pidwallalign_step(int ir_d_left1, int ir_d_left2, int ir_d_left3,
                              Logic__pidwallalign_out* _out,
                              Logic__pidwallalign_mem* self);

typedef struct Logic__obstacleavoider_mem {
  int v_112;
  int v_109;
  int v_108;
  int v_105;
  int v_118;
  int v_116;
  int v_124;
  int v_121;
  int v_135;
  int v_132;
  int v_131;
  int v_128;
  Logic__st_2 ck;
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
                                 int ir_d_left3, int white_line, int penc_l,
                                 int penc_r,
                                 Logic__obstacleavoider_out* _out,
                                 Logic__obstacleavoider_mem* self);

typedef struct Logic__parkingnode_mem {
  int v_147;
  int v_144;
  int v_143;
  int v_140;
  int v_152;
  int v_149;
  int v_160;
  int v_158;
  Logic__st_3 ck;
  int pnr;
  int penc_l_target_2;
  int penc_r_target_2;
  int timer_2;
  Logic__pidline_black_mem pidline_black;
} Logic__parkingnode_mem;

typedef struct Logic__parkingnode_out {
  int v_left;
  int v_right;
} Logic__parkingnode_out;

void Logic__parkingnode_reset(Logic__parkingnode_mem* self);

void Logic__parkingnode_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                             int penc_l, int penc_r, int ir_d_left1,
                             int ir_d_left2, int ir_d_left3,
                             Logic__parkingnode_out* _out,
                             Logic__parkingnode_mem* self);

typedef struct Logic__finallogic_mem {
  Logic__st_4 v;
  int v_162;
  Logic__st_5 ck;
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
                            int ir_d_left1, int ir_d_left2, int ir_d_left3,
                            Logic__finallogic_out* _out,
                            Logic__finallogic_mem* self);

#endif // LOGIC_H

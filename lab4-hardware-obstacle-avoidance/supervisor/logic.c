/* --- Generated the 14/3/2023 at 0:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__obstavoider_reset(Logic__obstavoider_mem* self) {
  self->oas_busy_1 = false;
  self->pnr_1 = false;
  self->ck = Logic__St_1_MoveDefault;
  self->v_157 = false;
  self->v_156 = Logic__St_Reverse_1;
  self->v_149 = true;
  self->v_144 = true;
  self->v_136 = true;
  self->v_129 = true;
  self->v_123 = true;
  self->v_115 = true;
  self->v_110 = true;
  self->v_102 = true;
  self->v_95 = true;
  self->v_89 = true;
  self->v_81 = true;
  self->v_76 = true;
  self->v_63 = true;
  self->v_58 = true;
  self->v_50 = true;
  self->v_43 = true;
  self->v_37 = true;
  self->v_29 = true;
  self->v_24 = true;
  self->v_16 = true;
  self->v_9 = true;
  self->v_3 = true;
}

void Logic__obstavoider_step(int ir_d_front, int ir_d_left, int penc_l,
                             int penc_r, Logic__obstavoider_out* _out,
                             Logic__obstavoider_mem* self) {
  
  int r_1_St_1_OAS;
  Logic__st_1 s_1_St_1_OAS;
  int r_1_St_1_MoveDefault;
  Logic__st_1 s_1_St_1_MoveDefault;
  int v_1;
  int v_7;
  int v_5;
  int v_4;
  int v_2;
  int v_14;
  int v_12;
  int v_11;
  int v_10;
  int v_8;
  int v_20;
  int v_18;
  int v_17;
  int v_15;
  int v_35;
  int v_34;
  int v_32;
  int v_31;
  int v_30;
  int v_27;
  int v_26;
  int v_25;
  int v_23;
  int v_22;
  int v_21;
  int v_41;
  int v_39;
  int v_38;
  int v_36;
  int v_48;
  int v_46;
  int v_45;
  int v_44;
  int v_42;
  int v_54;
  int v_52;
  int v_51;
  int v_49;
  int v_69;
  int v_68;
  int v_66;
  int v_65;
  int v_64;
  int v_61;
  int v_60;
  int v_59;
  int v_57;
  int v_56;
  int v_55;
  int v_72;
  int v_71;
  int v_70;
  int v_87;
  int v_86;
  int v_84;
  int v_83;
  int v_82;
  int v_79;
  int v_78;
  int v_77;
  int v_75;
  int v_74;
  int v_73;
  int v_93;
  int v_91;
  int v_90;
  int v_88;
  int v_100;
  int v_98;
  int v_97;
  int v_96;
  int v_94;
  int v_106;
  int v_104;
  int v_103;
  int v_101;
  int v_121;
  int v_120;
  int v_118;
  int v_117;
  int v_116;
  int v_113;
  int v_112;
  int v_111;
  int v_109;
  int v_108;
  int v_107;
  int v_127;
  int v_125;
  int v_124;
  int v_122;
  int v_134;
  int v_132;
  int v_131;
  int v_130;
  int v_128;
  int v_140;
  int v_138;
  int v_137;
  int v_135;
  int v_155;
  int v_154;
  int v_152;
  int v_151;
  int v_150;
  int v_147;
  int v_146;
  int v_145;
  int v_143;
  int v_142;
  int v_141;
  int nr_St_Idle;
  Logic__st ns_St_Idle;
  int penc_r_target_St_1_OAS_St_Idle;
  int penc_l_target_St_1_OAS_St_Idle;
  int current_state_St_1_OAS_St_Idle;
  int timer_St_1_OAS_St_Idle;
  int oas_busy_St_1_OAS_St_Idle;
  int v_right_St_1_OAS_St_Idle;
  int v_left_St_1_OAS_St_Idle;
  int dir_St_1_OAS_St_Idle;
  int nr_St_Delay_8;
  Logic__st ns_St_Delay_8;
  int penc_r_target_St_1_OAS_St_Delay_8;
  int penc_l_target_St_1_OAS_St_Delay_8;
  int current_state_St_1_OAS_St_Delay_8;
  int timer_St_1_OAS_St_Delay_8;
  int oas_busy_St_1_OAS_St_Delay_8;
  int v_right_St_1_OAS_St_Delay_8;
  int v_left_St_1_OAS_St_Delay_8;
  int dir_St_1_OAS_St_Delay_8;
  int nr_St_RightTurn_2;
  Logic__st ns_St_RightTurn_2;
  int penc_r_target_St_1_OAS_St_RightTurn_2;
  int penc_l_target_St_1_OAS_St_RightTurn_2;
  int current_state_St_1_OAS_St_RightTurn_2;
  int timer_St_1_OAS_St_RightTurn_2;
  int oas_busy_St_1_OAS_St_RightTurn_2;
  int v_right_St_1_OAS_St_RightTurn_2;
  int v_left_St_1_OAS_St_RightTurn_2;
  int dir_St_1_OAS_St_RightTurn_2;
  int nr_St_Delay_7;
  Logic__st ns_St_Delay_7;
  int penc_r_target_St_1_OAS_St_Delay_7;
  int penc_l_target_St_1_OAS_St_Delay_7;
  int current_state_St_1_OAS_St_Delay_7;
  int timer_St_1_OAS_St_Delay_7;
  int oas_busy_St_1_OAS_St_Delay_7;
  int v_right_St_1_OAS_St_Delay_7;
  int v_left_St_1_OAS_St_Delay_7;
  int dir_St_1_OAS_St_Delay_7;
  int nr_St_Forward_4;
  Logic__st ns_St_Forward_4;
  int penc_r_target_St_1_OAS_St_Forward_4;
  int penc_l_target_St_1_OAS_St_Forward_4;
  int current_state_St_1_OAS_St_Forward_4;
  int timer_St_1_OAS_St_Forward_4;
  int oas_busy_St_1_OAS_St_Forward_4;
  int v_right_St_1_OAS_St_Forward_4;
  int v_left_St_1_OAS_St_Forward_4;
  int dir_St_1_OAS_St_Forward_4;
  int nr_St_Delay_6;
  Logic__st ns_St_Delay_6;
  int penc_r_target_St_1_OAS_St_Delay_6;
  int penc_l_target_St_1_OAS_St_Delay_6;
  int current_state_St_1_OAS_St_Delay_6;
  int timer_St_1_OAS_St_Delay_6;
  int oas_busy_St_1_OAS_St_Delay_6;
  int v_right_St_1_OAS_St_Delay_6;
  int v_left_St_1_OAS_St_Delay_6;
  int dir_St_1_OAS_St_Delay_6;
  int nr_St_LeftTurn_2;
  Logic__st ns_St_LeftTurn_2;
  int penc_r_target_St_1_OAS_St_LeftTurn_2;
  int penc_l_target_St_1_OAS_St_LeftTurn_2;
  int current_state_St_1_OAS_St_LeftTurn_2;
  int timer_St_1_OAS_St_LeftTurn_2;
  int oas_busy_St_1_OAS_St_LeftTurn_2;
  int v_right_St_1_OAS_St_LeftTurn_2;
  int v_left_St_1_OAS_St_LeftTurn_2;
  int dir_St_1_OAS_St_LeftTurn_2;
  int nr_St_Delay_5;
  Logic__st ns_St_Delay_5;
  int penc_r_target_St_1_OAS_St_Delay_5;
  int penc_l_target_St_1_OAS_St_Delay_5;
  int current_state_St_1_OAS_St_Delay_5;
  int timer_St_1_OAS_St_Delay_5;
  int oas_busy_St_1_OAS_St_Delay_5;
  int v_right_St_1_OAS_St_Delay_5;
  int v_left_St_1_OAS_St_Delay_5;
  int dir_St_1_OAS_St_Delay_5;
  int nr_St_Forward_3;
  Logic__st ns_St_Forward_3;
  int penc_r_target_St_1_OAS_St_Forward_3;
  int penc_l_target_St_1_OAS_St_Forward_3;
  int current_state_St_1_OAS_St_Forward_3;
  int timer_St_1_OAS_St_Forward_3;
  int oas_busy_St_1_OAS_St_Forward_3;
  int v_right_St_1_OAS_St_Forward_3;
  int v_left_St_1_OAS_St_Forward_3;
  int dir_St_1_OAS_St_Forward_3;
  int nr_St_Forward_IR_2;
  Logic__st ns_St_Forward_IR_2;
  int penc_r_target_St_1_OAS_St_Forward_IR_2;
  int penc_l_target_St_1_OAS_St_Forward_IR_2;
  int current_state_St_1_OAS_St_Forward_IR_2;
  int timer_St_1_OAS_St_Forward_IR_2;
  int oas_busy_St_1_OAS_St_Forward_IR_2;
  int v_right_St_1_OAS_St_Forward_IR_2;
  int v_left_St_1_OAS_St_Forward_IR_2;
  int dir_St_1_OAS_St_Forward_IR_2;
  int nr_St_Forward_2;
  Logic__st ns_St_Forward_2;
  int penc_r_target_St_1_OAS_St_Forward_2;
  int penc_l_target_St_1_OAS_St_Forward_2;
  int current_state_St_1_OAS_St_Forward_2;
  int timer_St_1_OAS_St_Forward_2;
  int oas_busy_St_1_OAS_St_Forward_2;
  int v_right_St_1_OAS_St_Forward_2;
  int v_left_St_1_OAS_St_Forward_2;
  int dir_St_1_OAS_St_Forward_2;
  int nr_St_Delay_4;
  Logic__st ns_St_Delay_4;
  int penc_r_target_St_1_OAS_St_Delay_4;
  int penc_l_target_St_1_OAS_St_Delay_4;
  int current_state_St_1_OAS_St_Delay_4;
  int timer_St_1_OAS_St_Delay_4;
  int oas_busy_St_1_OAS_St_Delay_4;
  int v_right_St_1_OAS_St_Delay_4;
  int v_left_St_1_OAS_St_Delay_4;
  int dir_St_1_OAS_St_Delay_4;
  int nr_St_LeftTurn_1;
  Logic__st ns_St_LeftTurn_1;
  int penc_r_target_St_1_OAS_St_LeftTurn_1;
  int penc_l_target_St_1_OAS_St_LeftTurn_1;
  int current_state_St_1_OAS_St_LeftTurn_1;
  int timer_St_1_OAS_St_LeftTurn_1;
  int oas_busy_St_1_OAS_St_LeftTurn_1;
  int v_right_St_1_OAS_St_LeftTurn_1;
  int v_left_St_1_OAS_St_LeftTurn_1;
  int dir_St_1_OAS_St_LeftTurn_1;
  int nr_St_Delay_3;
  Logic__st ns_St_Delay_3;
  int penc_r_target_St_1_OAS_St_Delay_3;
  int penc_l_target_St_1_OAS_St_Delay_3;
  int current_state_St_1_OAS_St_Delay_3;
  int timer_St_1_OAS_St_Delay_3;
  int oas_busy_St_1_OAS_St_Delay_3;
  int v_right_St_1_OAS_St_Delay_3;
  int v_left_St_1_OAS_St_Delay_3;
  int dir_St_1_OAS_St_Delay_3;
  int nr_St_Forward_1;
  Logic__st ns_St_Forward_1;
  int penc_r_target_St_1_OAS_St_Forward_1;
  int penc_l_target_St_1_OAS_St_Forward_1;
  int current_state_St_1_OAS_St_Forward_1;
  int timer_St_1_OAS_St_Forward_1;
  int oas_busy_St_1_OAS_St_Forward_1;
  int v_right_St_1_OAS_St_Forward_1;
  int v_left_St_1_OAS_St_Forward_1;
  int dir_St_1_OAS_St_Forward_1;
  int nr_St_Delay_2;
  Logic__st ns_St_Delay_2;
  int penc_r_target_St_1_OAS_St_Delay_2;
  int penc_l_target_St_1_OAS_St_Delay_2;
  int current_state_St_1_OAS_St_Delay_2;
  int timer_St_1_OAS_St_Delay_2;
  int oas_busy_St_1_OAS_St_Delay_2;
  int v_right_St_1_OAS_St_Delay_2;
  int v_left_St_1_OAS_St_Delay_2;
  int dir_St_1_OAS_St_Delay_2;
  int nr_St_RightTurn_1;
  Logic__st ns_St_RightTurn_1;
  int penc_r_target_St_1_OAS_St_RightTurn_1;
  int penc_l_target_St_1_OAS_St_RightTurn_1;
  int current_state_St_1_OAS_St_RightTurn_1;
  int timer_St_1_OAS_St_RightTurn_1;
  int oas_busy_St_1_OAS_St_RightTurn_1;
  int v_right_St_1_OAS_St_RightTurn_1;
  int v_left_St_1_OAS_St_RightTurn_1;
  int dir_St_1_OAS_St_RightTurn_1;
  int nr_St_Delay_1;
  Logic__st ns_St_Delay_1;
  int penc_r_target_St_1_OAS_St_Delay_1;
  int penc_l_target_St_1_OAS_St_Delay_1;
  int current_state_St_1_OAS_St_Delay_1;
  int timer_St_1_OAS_St_Delay_1;
  int oas_busy_St_1_OAS_St_Delay_1;
  int v_right_St_1_OAS_St_Delay_1;
  int v_left_St_1_OAS_St_Delay_1;
  int dir_St_1_OAS_St_Delay_1;
  int nr_St_Reverse_1;
  Logic__st ns_St_Reverse_1;
  int penc_r_target_St_1_OAS_St_Reverse_1;
  int penc_l_target_St_1_OAS_St_Reverse_1;
  int current_state_St_1_OAS_St_Reverse_1;
  int timer_St_1_OAS_St_Reverse_1;
  int oas_busy_St_1_OAS_St_Reverse_1;
  int v_right_St_1_OAS_St_Reverse_1;
  int v_left_St_1_OAS_St_Reverse_1;
  int dir_St_1_OAS_St_Reverse_1;
  Logic__st ck_2;
  int v;
  Logic__st ns;
  int r;
  int nr;
  int pnr;
  int nr_1_St_1_OAS;
  Logic__st_1 ns_1_St_1_OAS;
  int penc_r_target_St_1_OAS;
  int penc_l_target_St_1_OAS;
  int current_state_St_1_OAS;
  int timer_St_1_OAS;
  int oas_busy_St_1_OAS;
  int v_right_St_1_OAS;
  int v_left_St_1_OAS;
  int dir_St_1_OAS;
  int nr_1_St_1_MoveDefault;
  Logic__st_1 ns_1_St_1_MoveDefault;
  int penc_r_target_St_1_MoveDefault;
  int penc_l_target_St_1_MoveDefault;
  int current_state_St_1_MoveDefault;
  int timer_St_1_MoveDefault;
  int oas_busy_St_1_MoveDefault;
  int v_right_St_1_MoveDefault;
  int v_left_St_1_MoveDefault;
  int dir_St_1_MoveDefault;
  Logic__st_1 ck_1;
  Logic__st_1 s_1;
  Logic__st_1 ns_1;
  int r_1;
  int nr_1;
  int oas_busy;
  int timer;
  int current_state;
  int penc_l_target;
  int penc_r_target;
  switch (self->ck) {
    case Logic__St_1_MoveDefault:
      if (ir_d_front) {
        r_1_St_1_MoveDefault = true;
        s_1_St_1_MoveDefault = Logic__St_1_OAS;
      } else {
        r_1_St_1_MoveDefault = self->pnr_1;
        s_1_St_1_MoveDefault = Logic__St_1_MoveDefault;
      };
      s_1 = s_1_St_1_MoveDefault;
      r_1 = r_1_St_1_MoveDefault;
      break;
    case Logic__St_1_OAS:
      r_1_St_1_OAS = self->pnr_1;
      s_1_St_1_OAS = Logic__St_1_OAS;
      s_1 = s_1_St_1_OAS;
      r_1 = r_1_St_1_OAS;
      break;
    default:
      break;
  };
  ck_1 = s_1;
  switch (ck_1) {
    case Logic__St_1_MoveDefault:
      penc_r_target_St_1_MoveDefault = self->penc_r_target_1;
      penc_l_target_St_1_MoveDefault = self->penc_l_target_1;
      timer_St_1_MoveDefault = self->timer_1;
      oas_busy_St_1_MoveDefault = false;
      v_right_St_1_MoveDefault = 150;
      v_left_St_1_MoveDefault = 150;
      dir_St_1_MoveDefault = 0;
      current_state_St_1_MoveDefault = 1;
      nr_1_St_1_MoveDefault = false;
      ns_1_St_1_MoveDefault = Logic__St_1_MoveDefault;
      _out->dir = dir_St_1_MoveDefault;
      oas_busy = oas_busy_St_1_MoveDefault;
      timer = timer_St_1_MoveDefault;
      current_state = current_state_St_1_MoveDefault;
      penc_l_target = penc_l_target_St_1_MoveDefault;
      penc_r_target = penc_r_target_St_1_MoveDefault;
      ns_1 = ns_1_St_1_MoveDefault;
      nr_1 = nr_1_St_1_MoveDefault;
      _out->v_left = v_left_St_1_MoveDefault;
      _out->v_right = v_right_St_1_MoveDefault;
      break;
    case Logic__St_1_OAS:
      if (r_1) {
        pnr = false;
      } else {
        pnr = self->v_157;
      };
      r = pnr;
      if (r_1) {
        ck_2 = Logic__St_Reverse_1;
      } else {
        ck_2 = self->v_156;
      };
      switch (ck_2) {
        case Logic__St_Reverse_1:
          timer_St_1_OAS_St_Reverse_1 = self->timer_1;
          oas_busy_St_1_OAS_St_Reverse_1 = true;
          dir_St_1_OAS_St_Reverse_1 = 1;
          v_152 = (penc_r+Logic__rev_count);
          v_150 = (r_1||r);
          if (self->v_149) {
            v_151 = true;
          } else {
            v_151 = v_150;
          };
          if (v_151) {
            penc_r_target_St_1_OAS_St_Reverse_1 = v_152;
          } else {
            penc_r_target_St_1_OAS_St_Reverse_1 = self->v_153;
          };
          v_147 = (penc_l+Logic__rev_count);
          v_145 = (r_1||r);
          if (self->v_144) {
            v_146 = true;
          } else {
            v_146 = v_145;
          };
          if (v_146) {
            penc_l_target_St_1_OAS_St_Reverse_1 = v_147;
          } else {
            penc_l_target_St_1_OAS_St_Reverse_1 = self->v_148;
          };
          current_state_St_1_OAS_St_Reverse_1 = 21;
          dir_St_1_OAS = dir_St_1_OAS_St_Reverse_1;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Reverse_1;
          timer_St_1_OAS = timer_St_1_OAS_St_Reverse_1;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Reverse_1;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Reverse_1;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Reverse_1;
          break;
        case Logic__St_Delay_1:
          penc_r_target_St_1_OAS_St_Delay_1 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_1 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_1 = self->oas_busy_1;
          v_140 = (self->v_139-1);
          v_137 = (r_1||r);
          if (self->v_136) {
            v_138 = true;
          } else {
            v_138 = v_137;
          };
          if (v_138) {
            timer_St_1_OAS_St_Delay_1 = 100;
          } else {
            timer_St_1_OAS_St_Delay_1 = v_140;
          };
          v_right_St_1_OAS_St_Delay_1 = 0;
          v_left_St_1_OAS_St_Delay_1 = 0;
          dir_St_1_OAS_St_Delay_1 = 0;
          current_state_St_1_OAS_St_Delay_1 = 211;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_1;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_1;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_1;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_1;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_1;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_1;
          break;
        case Logic__St_RightTurn_1:
          penc_r_target_St_1_OAS_St_RightTurn_1 = self->penc_r_target_1;
          timer_St_1_OAS_St_RightTurn_1 = self->timer_1;
          oas_busy_St_1_OAS_St_RightTurn_1 = true;
          v_right_St_1_OAS_St_RightTurn_1 = 0;
          dir_St_1_OAS_St_RightTurn_1 = 3;
          v_132 = (penc_l+Logic__init_right_turn_count);
          v_130 = (r_1||r);
          if (self->v_129) {
            v_131 = true;
          } else {
            v_131 = v_130;
          };
          if (v_131) {
            penc_l_target_St_1_OAS_St_RightTurn_1 = v_132;
          } else {
            penc_l_target_St_1_OAS_St_RightTurn_1 = self->v_133;
          };
          current_state_St_1_OAS_St_RightTurn_1 = 22;
          dir_St_1_OAS = dir_St_1_OAS_St_RightTurn_1;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_RightTurn_1;
          timer_St_1_OAS = timer_St_1_OAS_St_RightTurn_1;
          current_state_St_1_OAS = current_state_St_1_OAS_St_RightTurn_1;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_RightTurn_1;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_RightTurn_1;
          break;
        case Logic__St_Delay_2:
          penc_r_target_St_1_OAS_St_Delay_2 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_2 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_2 = self->oas_busy_1;
          v_127 = (self->v_126-1);
          v_124 = (r_1||r);
          if (self->v_123) {
            v_125 = true;
          } else {
            v_125 = v_124;
          };
          if (v_125) {
            timer_St_1_OAS_St_Delay_2 = 100;
          } else {
            timer_St_1_OAS_St_Delay_2 = v_127;
          };
          v_right_St_1_OAS_St_Delay_2 = 0;
          v_left_St_1_OAS_St_Delay_2 = 0;
          dir_St_1_OAS_St_Delay_2 = 0;
          current_state_St_1_OAS_St_Delay_2 = 221;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_2;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_2;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_2;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_2;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_2;
          break;
        case Logic__St_Forward_1:
          timer_St_1_OAS_St_Forward_1 = self->timer_1;
          oas_busy_St_1_OAS_St_Forward_1 = true;
          dir_St_1_OAS_St_Forward_1 = 0;
          v_118 = (penc_r+Logic__fwd_count_1);
          v_116 = (r_1||r);
          if (self->v_115) {
            v_117 = true;
          } else {
            v_117 = v_116;
          };
          if (v_117) {
            penc_r_target_St_1_OAS_St_Forward_1 = v_118;
          } else {
            penc_r_target_St_1_OAS_St_Forward_1 = self->v_119;
          };
          v_113 = (penc_l+Logic__fwd_count_1);
          v_111 = (r_1||r);
          if (self->v_110) {
            v_112 = true;
          } else {
            v_112 = v_111;
          };
          if (v_112) {
            penc_l_target_St_1_OAS_St_Forward_1 = v_113;
          } else {
            penc_l_target_St_1_OAS_St_Forward_1 = self->v_114;
          };
          current_state_St_1_OAS_St_Forward_1 = 23;
          dir_St_1_OAS = dir_St_1_OAS_St_Forward_1;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Forward_1;
          timer_St_1_OAS = timer_St_1_OAS_St_Forward_1;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Forward_1;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Forward_1;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Forward_1;
          break;
        case Logic__St_Delay_3:
          penc_r_target_St_1_OAS_St_Delay_3 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_3 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_3 = self->oas_busy_1;
          v_106 = (self->v_105-1);
          v_103 = (r_1||r);
          if (self->v_102) {
            v_104 = true;
          } else {
            v_104 = v_103;
          };
          if (v_104) {
            timer_St_1_OAS_St_Delay_3 = 100;
          } else {
            timer_St_1_OAS_St_Delay_3 = v_106;
          };
          v_right_St_1_OAS_St_Delay_3 = 0;
          v_left_St_1_OAS_St_Delay_3 = 0;
          dir_St_1_OAS_St_Delay_3 = 0;
          current_state_St_1_OAS_St_Delay_3 = 241;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_3;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_3;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_3;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_3;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_3;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_3;
          break;
        case Logic__St_LeftTurn_1:
          penc_l_target_St_1_OAS_St_LeftTurn_1 = self->penc_l_target_1;
          timer_St_1_OAS_St_LeftTurn_1 = self->timer_1;
          oas_busy_St_1_OAS_St_LeftTurn_1 = true;
          v_left_St_1_OAS_St_LeftTurn_1 = 0;
          dir_St_1_OAS_St_LeftTurn_1 = 2;
          v_98 = (penc_r+Logic__init_left_turn_count);
          v_96 = (r_1||r);
          if (self->v_95) {
            v_97 = true;
          } else {
            v_97 = v_96;
          };
          if (v_97) {
            penc_r_target_St_1_OAS_St_LeftTurn_1 = v_98;
          } else {
            penc_r_target_St_1_OAS_St_LeftTurn_1 = self->v_99;
          };
          current_state_St_1_OAS_St_LeftTurn_1 = 25;
          dir_St_1_OAS = dir_St_1_OAS_St_LeftTurn_1;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_LeftTurn_1;
          timer_St_1_OAS = timer_St_1_OAS_St_LeftTurn_1;
          current_state_St_1_OAS = current_state_St_1_OAS_St_LeftTurn_1;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_LeftTurn_1;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_LeftTurn_1;
          break;
        case Logic__St_Delay_4:
          penc_r_target_St_1_OAS_St_Delay_4 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_4 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_4 = self->oas_busy_1;
          v_93 = (self->v_92-1);
          v_90 = (r_1||r);
          if (self->v_89) {
            v_91 = true;
          } else {
            v_91 = v_90;
          };
          if (v_91) {
            timer_St_1_OAS_St_Delay_4 = 100;
          } else {
            timer_St_1_OAS_St_Delay_4 = v_93;
          };
          v_right_St_1_OAS_St_Delay_4 = 0;
          v_left_St_1_OAS_St_Delay_4 = 0;
          dir_St_1_OAS_St_Delay_4 = 0;
          current_state_St_1_OAS_St_Delay_4 = 251;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_4;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_4;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_4;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_4;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_4;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_4;
          break;
        case Logic__St_Forward_2:
          timer_St_1_OAS_St_Forward_2 = self->timer_1;
          oas_busy_St_1_OAS_St_Forward_2 = true;
          dir_St_1_OAS_St_Forward_2 = 0;
          v_84 = (penc_r+Logic__fwd_count_1);
          v_82 = (r_1||r);
          if (self->v_81) {
            v_83 = true;
          } else {
            v_83 = v_82;
          };
          if (v_83) {
            penc_r_target_St_1_OAS_St_Forward_2 = v_84;
          } else {
            penc_r_target_St_1_OAS_St_Forward_2 = self->v_85;
          };
          v_79 = (penc_l+Logic__fwd_count_1);
          v_77 = (r_1||r);
          if (self->v_76) {
            v_78 = true;
          } else {
            v_78 = v_77;
          };
          if (v_78) {
            penc_l_target_St_1_OAS_St_Forward_2 = v_79;
          } else {
            penc_l_target_St_1_OAS_St_Forward_2 = self->v_80;
          };
          current_state_St_1_OAS_St_Forward_2 = 23;
          dir_St_1_OAS = dir_St_1_OAS_St_Forward_2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Forward_2;
          timer_St_1_OAS = timer_St_1_OAS_St_Forward_2;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Forward_2;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Forward_2;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Forward_2;
          break;
        case Logic__St_Forward_IR_2:
          penc_r_target_St_1_OAS_St_Forward_IR_2 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Forward_IR_2 = self->penc_l_target_1;
          timer_St_1_OAS_St_Forward_IR_2 = self->timer_1;
          oas_busy_St_1_OAS_St_Forward_IR_2 = true;
          dir_St_1_OAS_St_Forward_IR_2 = 0;
          current_state_St_1_OAS_St_Forward_IR_2 = 24;
          v_70 = !(ir_d_left);
          if (v_70) {
            nr_St_Forward_IR_2 = true;
            ns_St_Forward_IR_2 = Logic__St_Forward_3;
          } else {
            nr_St_Forward_IR_2 = false;
            ns_St_Forward_IR_2 = Logic__St_Forward_IR_2;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_Forward_IR_2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Forward_IR_2;
          timer_St_1_OAS = timer_St_1_OAS_St_Forward_IR_2;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Forward_IR_2;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Forward_IR_2;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Forward_IR_2;
          break;
        case Logic__St_Forward_3:
          timer_St_1_OAS_St_Forward_3 = self->timer_1;
          oas_busy_St_1_OAS_St_Forward_3 = true;
          dir_St_1_OAS_St_Forward_3 = 0;
          v_66 = (penc_r+Logic__fwd_count_2);
          v_64 = (r_1||r);
          if (self->v_63) {
            v_65 = true;
          } else {
            v_65 = v_64;
          };
          if (v_65) {
            penc_r_target_St_1_OAS_St_Forward_3 = v_66;
          } else {
            penc_r_target_St_1_OAS_St_Forward_3 = self->v_67;
          };
          v_61 = (penc_l+Logic__fwd_count_2);
          v_59 = (r_1||r);
          if (self->v_58) {
            v_60 = true;
          } else {
            v_60 = v_59;
          };
          if (v_60) {
            penc_l_target_St_1_OAS_St_Forward_3 = v_61;
          } else {
            penc_l_target_St_1_OAS_St_Forward_3 = self->v_62;
          };
          current_state_St_1_OAS_St_Forward_3 = 25;
          dir_St_1_OAS = dir_St_1_OAS_St_Forward_3;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Forward_3;
          timer_St_1_OAS = timer_St_1_OAS_St_Forward_3;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Forward_3;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Forward_3;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Forward_3;
          break;
        case Logic__St_Delay_5:
          penc_r_target_St_1_OAS_St_Delay_5 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_5 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_5 = self->oas_busy_1;
          v_54 = (self->v_53-1);
          v_51 = (r_1||r);
          if (self->v_50) {
            v_52 = true;
          } else {
            v_52 = v_51;
          };
          if (v_52) {
            timer_St_1_OAS_St_Delay_5 = 150;
          } else {
            timer_St_1_OAS_St_Delay_5 = v_54;
          };
          v_right_St_1_OAS_St_Delay_5 = 0;
          v_left_St_1_OAS_St_Delay_5 = 0;
          dir_St_1_OAS_St_Delay_5 = 0;
          current_state_St_1_OAS_St_Delay_5 = 251;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_5;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_5;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_5;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_5;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_5;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_5;
          break;
        case Logic__St_LeftTurn_2:
          penc_l_target_St_1_OAS_St_LeftTurn_2 = self->penc_l_target_1;
          timer_St_1_OAS_St_LeftTurn_2 = self->timer_1;
          oas_busy_St_1_OAS_St_LeftTurn_2 = true;
          v_left_St_1_OAS_St_LeftTurn_2 = 0;
          dir_St_1_OAS_St_LeftTurn_2 = 2;
          v_46 = (penc_r+Logic__init_left_turn_count);
          v_44 = (r_1||r);
          if (self->v_43) {
            v_45 = true;
          } else {
            v_45 = v_44;
          };
          if (v_45) {
            penc_r_target_St_1_OAS_St_LeftTurn_2 = v_46;
          } else {
            penc_r_target_St_1_OAS_St_LeftTurn_2 = self->v_47;
          };
          current_state_St_1_OAS_St_LeftTurn_2 = 26;
          dir_St_1_OAS = dir_St_1_OAS_St_LeftTurn_2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_LeftTurn_2;
          timer_St_1_OAS = timer_St_1_OAS_St_LeftTurn_2;
          current_state_St_1_OAS = current_state_St_1_OAS_St_LeftTurn_2;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_LeftTurn_2;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_LeftTurn_2;
          break;
        case Logic__St_Delay_6:
          penc_r_target_St_1_OAS_St_Delay_6 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_6 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_6 = self->oas_busy_1;
          v_41 = (self->v_40-1);
          v_38 = (r_1||r);
          if (self->v_37) {
            v_39 = true;
          } else {
            v_39 = v_38;
          };
          if (v_39) {
            timer_St_1_OAS_St_Delay_6 = 150;
          } else {
            timer_St_1_OAS_St_Delay_6 = v_41;
          };
          v_right_St_1_OAS_St_Delay_6 = 0;
          v_left_St_1_OAS_St_Delay_6 = 0;
          dir_St_1_OAS_St_Delay_6 = 0;
          current_state_St_1_OAS_St_Delay_6 = 261;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_6;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_6;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_6;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_6;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_6;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_6;
          break;
        case Logic__St_Forward_4:
          timer_St_1_OAS_St_Forward_4 = self->timer_1;
          oas_busy_St_1_OAS_St_Forward_4 = true;
          dir_St_1_OAS_St_Forward_4 = 0;
          v_32 = (penc_r+Logic__fwd_count_3);
          v_30 = (r_1||r);
          if (self->v_29) {
            v_31 = true;
          } else {
            v_31 = v_30;
          };
          if (v_31) {
            penc_r_target_St_1_OAS_St_Forward_4 = v_32;
          } else {
            penc_r_target_St_1_OAS_St_Forward_4 = self->v_33;
          };
          v_27 = (penc_l+Logic__fwd_count_3);
          v_25 = (r_1||r);
          if (self->v_24) {
            v_26 = true;
          } else {
            v_26 = v_25;
          };
          if (v_26) {
            penc_l_target_St_1_OAS_St_Forward_4 = v_27;
          } else {
            penc_l_target_St_1_OAS_St_Forward_4 = self->v_28;
          };
          current_state_St_1_OAS_St_Forward_4 = 27;
          dir_St_1_OAS = dir_St_1_OAS_St_Forward_4;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Forward_4;
          timer_St_1_OAS = timer_St_1_OAS_St_Forward_4;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Forward_4;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Forward_4;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Forward_4;
          break;
        case Logic__St_Delay_7:
          penc_r_target_St_1_OAS_St_Delay_7 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_7 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_7 = self->oas_busy_1;
          v_20 = (self->v_19-1);
          v_17 = (r_1||r);
          if (self->v_16) {
            v_18 = true;
          } else {
            v_18 = v_17;
          };
          if (v_18) {
            timer_St_1_OAS_St_Delay_7 = 150;
          } else {
            timer_St_1_OAS_St_Delay_7 = v_20;
          };
          v_right_St_1_OAS_St_Delay_7 = 0;
          v_left_St_1_OAS_St_Delay_7 = 0;
          dir_St_1_OAS_St_Delay_7 = 0;
          current_state_St_1_OAS_St_Delay_7 = 261;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_7;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_7;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_7;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_7;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_7;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_7;
          break;
        case Logic__St_RightTurn_2:
          penc_r_target_St_1_OAS_St_RightTurn_2 = self->penc_r_target_1;
          timer_St_1_OAS_St_RightTurn_2 = self->timer_1;
          oas_busy_St_1_OAS_St_RightTurn_2 = true;
          v_right_St_1_OAS_St_RightTurn_2 = 0;
          dir_St_1_OAS_St_RightTurn_2 = 3;
          v_12 = (penc_l+Logic__init_right_turn_count);
          v_10 = (r_1||r);
          if (self->v_9) {
            v_11 = true;
          } else {
            v_11 = v_10;
          };
          if (v_11) {
            penc_l_target_St_1_OAS_St_RightTurn_2 = v_12;
          } else {
            penc_l_target_St_1_OAS_St_RightTurn_2 = self->v_13;
          };
          current_state_St_1_OAS_St_RightTurn_2 = 27;
          dir_St_1_OAS = dir_St_1_OAS_St_RightTurn_2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_RightTurn_2;
          timer_St_1_OAS = timer_St_1_OAS_St_RightTurn_2;
          current_state_St_1_OAS = current_state_St_1_OAS_St_RightTurn_2;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_RightTurn_2;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_RightTurn_2;
          break;
        case Logic__St_Delay_8:
          penc_r_target_St_1_OAS_St_Delay_8 = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Delay_8 = self->penc_l_target_1;
          oas_busy_St_1_OAS_St_Delay_8 = self->oas_busy_1;
          v_7 = (self->v_6-1);
          v_4 = (r_1||r);
          if (self->v_3) {
            v_5 = true;
          } else {
            v_5 = v_4;
          };
          if (v_5) {
            timer_St_1_OAS_St_Delay_8 = 100;
          } else {
            timer_St_1_OAS_St_Delay_8 = v_7;
          };
          v_right_St_1_OAS_St_Delay_8 = 0;
          v_left_St_1_OAS_St_Delay_8 = 0;
          dir_St_1_OAS_St_Delay_8 = 0;
          current_state_St_1_OAS_St_Delay_8 = 28;
          dir_St_1_OAS = dir_St_1_OAS_St_Delay_8;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Delay_8;
          timer_St_1_OAS = timer_St_1_OAS_St_Delay_8;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Delay_8;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Delay_8;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Delay_8;
          break;
        case Logic__St_Idle:
          penc_r_target_St_1_OAS_St_Idle = self->penc_r_target_1;
          penc_l_target_St_1_OAS_St_Idle = self->penc_l_target_1;
          timer_St_1_OAS_St_Idle = self->timer_1;
          oas_busy_St_1_OAS_St_Idle = false;
          v_right_St_1_OAS_St_Idle = 0;
          v_left_St_1_OAS_St_Idle = 0;
          dir_St_1_OAS_St_Idle = 0;
          current_state_St_1_OAS_St_Idle = 29;
          dir_St_1_OAS = dir_St_1_OAS_St_Idle;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Idle;
          timer_St_1_OAS = timer_St_1_OAS_St_Idle;
          current_state_St_1_OAS = current_state_St_1_OAS_St_Idle;
          penc_l_target_St_1_OAS = penc_l_target_St_1_OAS_St_Idle;
          penc_r_target_St_1_OAS = penc_r_target_St_1_OAS_St_Idle;
          break;
        default:
          break;
      };
      _out->dir = dir_St_1_OAS;
      oas_busy = oas_busy_St_1_OAS;
      v = !(oas_busy);
      if (v) {
        nr_1_St_1_OAS = true;
        ns_1_St_1_OAS = Logic__St_1_MoveDefault;
      } else {
        nr_1_St_1_OAS = false;
        ns_1_St_1_OAS = Logic__St_1_OAS;
      };
      timer = timer_St_1_OAS;
      current_state = current_state_St_1_OAS;
      penc_l_target = penc_l_target_St_1_OAS;
      penc_r_target = penc_r_target_St_1_OAS;
      ns_1 = ns_1_St_1_OAS;
      nr_1 = nr_1_St_1_OAS;
      switch (ck_2) {
        case Logic__St_Reverse_1:
          v_155 = (penc_r<penc_r_target);
          if (v_155) {
            v_right_St_1_OAS_St_Reverse_1 = 80;
          } else {
            v_right_St_1_OAS_St_Reverse_1 = 0;
          };
          v_154 = (penc_l<penc_l_target);
          if (v_154) {
            v_left_St_1_OAS_St_Reverse_1 = 80;
          } else {
            v_left_St_1_OAS_St_Reverse_1 = 0;
          };
          v_142 = (penc_r>=penc_r_target);
          v_141 = (penc_l>=penc_l_target);
          v_143 = (v_141&&v_142);
          if (v_143) {
            nr_St_Reverse_1 = true;
            ns_St_Reverse_1 = Logic__St_Delay_1;
          } else {
            nr_St_Reverse_1 = false;
            ns_St_Reverse_1 = Logic__St_Reverse_1;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Reverse_1;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Reverse_1;
          ns = ns_St_Reverse_1;
          nr = nr_St_Reverse_1;
          break;
        case Logic__St_Delay_1:
          v_135 = (timer<=0);
          if (v_135) {
            nr_St_Delay_1 = true;
            ns_St_Delay_1 = Logic__St_RightTurn_1;
          } else {
            nr_St_Delay_1 = false;
            ns_St_Delay_1 = Logic__St_Delay_1;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_1;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_1;
          ns = ns_St_Delay_1;
          nr = nr_St_Delay_1;
          break;
        case Logic__St_RightTurn_1:
          v_134 = (penc_l<penc_l_target);
          if (v_134) {
            v_left_St_1_OAS_St_RightTurn_1 = 90;
          } else {
            v_left_St_1_OAS_St_RightTurn_1 = 0;
          };
          v_128 = (penc_l>=penc_l_target);
          if (v_128) {
            nr_St_RightTurn_1 = true;
            ns_St_RightTurn_1 = Logic__St_Delay_2;
          } else {
            nr_St_RightTurn_1 = false;
            ns_St_RightTurn_1 = Logic__St_RightTurn_1;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_RightTurn_1;
          v_right_St_1_OAS = v_right_St_1_OAS_St_RightTurn_1;
          ns = ns_St_RightTurn_1;
          nr = nr_St_RightTurn_1;
          break;
        case Logic__St_Delay_2:
          v_122 = (timer<=0);
          if (v_122) {
            nr_St_Delay_2 = true;
            ns_St_Delay_2 = Logic__St_Forward_1;
          } else {
            nr_St_Delay_2 = false;
            ns_St_Delay_2 = Logic__St_Delay_2;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_2;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_2;
          ns = ns_St_Delay_2;
          nr = nr_St_Delay_2;
          break;
        case Logic__St_Forward_1:
          v_121 = (penc_r<penc_r_target);
          if (v_121) {
            v_right_St_1_OAS_St_Forward_1 = 150;
          } else {
            v_right_St_1_OAS_St_Forward_1 = 0;
          };
          v_120 = (penc_l<penc_l_target);
          if (v_120) {
            v_left_St_1_OAS_St_Forward_1 = 150;
          } else {
            v_left_St_1_OAS_St_Forward_1 = 0;
          };
          v_108 = (penc_r>=penc_r_target);
          v_107 = (penc_l>=penc_l_target);
          v_109 = (v_107&&v_108);
          if (v_109) {
            nr_St_Forward_1 = true;
            ns_St_Forward_1 = Logic__St_Delay_3;
          } else {
            nr_St_Forward_1 = false;
            ns_St_Forward_1 = Logic__St_Forward_1;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Forward_1;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Forward_1;
          ns = ns_St_Forward_1;
          nr = nr_St_Forward_1;
          break;
        case Logic__St_Delay_3:
          v_101 = (timer<=0);
          if (v_101) {
            nr_St_Delay_3 = true;
            ns_St_Delay_3 = Logic__St_LeftTurn_1;
          } else {
            nr_St_Delay_3 = false;
            ns_St_Delay_3 = Logic__St_Delay_3;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_3;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_3;
          ns = ns_St_Delay_3;
          nr = nr_St_Delay_3;
          break;
        case Logic__St_LeftTurn_1:
          v_100 = (penc_r<penc_r_target);
          if (v_100) {
            v_right_St_1_OAS_St_LeftTurn_1 = 90;
          } else {
            v_right_St_1_OAS_St_LeftTurn_1 = 0;
          };
          v_94 = (penc_r>=penc_r_target);
          if (v_94) {
            nr_St_LeftTurn_1 = true;
            ns_St_LeftTurn_1 = Logic__St_Delay_4;
          } else {
            nr_St_LeftTurn_1 = false;
            ns_St_LeftTurn_1 = Logic__St_LeftTurn_1;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_LeftTurn_1;
          v_right_St_1_OAS = v_right_St_1_OAS_St_LeftTurn_1;
          ns = ns_St_LeftTurn_1;
          nr = nr_St_LeftTurn_1;
          break;
        case Logic__St_Delay_4:
          v_88 = (timer<=0);
          if (v_88) {
            nr_St_Delay_4 = true;
            ns_St_Delay_4 = Logic__St_Forward_2;
          } else {
            nr_St_Delay_4 = false;
            ns_St_Delay_4 = Logic__St_Delay_4;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_4;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_4;
          ns = ns_St_Delay_4;
          nr = nr_St_Delay_4;
          break;
        case Logic__St_Forward_2:
          v_87 = (penc_r<penc_r_target);
          if (v_87) {
            v_right_St_1_OAS_St_Forward_2 = 150;
          } else {
            v_right_St_1_OAS_St_Forward_2 = 0;
          };
          v_86 = (penc_l<penc_l_target);
          if (v_86) {
            v_left_St_1_OAS_St_Forward_2 = 150;
          } else {
            v_left_St_1_OAS_St_Forward_2 = 0;
          };
          v_74 = (penc_r>=penc_r_target);
          v_73 = (penc_l>=penc_l_target);
          v_75 = (v_73&&v_74);
          if (v_75) {
            nr_St_Forward_2 = true;
            ns_St_Forward_2 = Logic__St_Forward_IR_2;
          } else {
            nr_St_Forward_2 = false;
            ns_St_Forward_2 = Logic__St_Forward_2;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Forward_2;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Forward_2;
          ns = ns_St_Forward_2;
          nr = nr_St_Forward_2;
          break;
        case Logic__St_Forward_IR_2:
          v_72 = (penc_r<penc_r_target);
          if (v_72) {
            v_right_St_1_OAS_St_Forward_IR_2 = 150;
          } else {
            v_right_St_1_OAS_St_Forward_IR_2 = 0;
          };
          v_71 = (penc_l<penc_l_target);
          if (v_71) {
            v_left_St_1_OAS_St_Forward_IR_2 = 150;
          } else {
            v_left_St_1_OAS_St_Forward_IR_2 = 0;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Forward_IR_2;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Forward_IR_2;
          ns = ns_St_Forward_IR_2;
          nr = nr_St_Forward_IR_2;
          break;
        case Logic__St_Forward_3:
          v_69 = (penc_r<penc_r_target);
          if (v_69) {
            v_right_St_1_OAS_St_Forward_3 = 150;
          } else {
            v_right_St_1_OAS_St_Forward_3 = 0;
          };
          v_68 = (penc_l<penc_l_target);
          if (v_68) {
            v_left_St_1_OAS_St_Forward_3 = 150;
          } else {
            v_left_St_1_OAS_St_Forward_3 = 0;
          };
          v_56 = (penc_r>=penc_r_target);
          v_55 = (penc_l>=penc_l_target);
          v_57 = (v_55&&v_56);
          if (v_57) {
            nr_St_Forward_3 = true;
            ns_St_Forward_3 = Logic__St_Delay_5;
          } else {
            nr_St_Forward_3 = false;
            ns_St_Forward_3 = Logic__St_Forward_3;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Forward_3;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Forward_3;
          ns = ns_St_Forward_3;
          nr = nr_St_Forward_3;
          break;
        case Logic__St_Delay_5:
          v_49 = (timer<=0);
          if (v_49) {
            nr_St_Delay_5 = true;
            ns_St_Delay_5 = Logic__St_LeftTurn_2;
          } else {
            nr_St_Delay_5 = false;
            ns_St_Delay_5 = Logic__St_Delay_5;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_5;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_5;
          ns = ns_St_Delay_5;
          nr = nr_St_Delay_5;
          break;
        case Logic__St_LeftTurn_2:
          v_48 = (penc_r<penc_r_target);
          if (v_48) {
            v_right_St_1_OAS_St_LeftTurn_2 = 90;
          } else {
            v_right_St_1_OAS_St_LeftTurn_2 = 0;
          };
          v_42 = (penc_r>=penc_r_target);
          if (v_42) {
            nr_St_LeftTurn_2 = true;
            ns_St_LeftTurn_2 = Logic__St_Delay_6;
          } else {
            nr_St_LeftTurn_2 = false;
            ns_St_LeftTurn_2 = Logic__St_LeftTurn_2;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_LeftTurn_2;
          v_right_St_1_OAS = v_right_St_1_OAS_St_LeftTurn_2;
          ns = ns_St_LeftTurn_2;
          nr = nr_St_LeftTurn_2;
          break;
        case Logic__St_Delay_6:
          v_36 = (timer<=0);
          if (v_36) {
            nr_St_Delay_6 = true;
            ns_St_Delay_6 = Logic__St_Forward_4;
          } else {
            nr_St_Delay_6 = false;
            ns_St_Delay_6 = Logic__St_Delay_6;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_6;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_6;
          ns = ns_St_Delay_6;
          nr = nr_St_Delay_6;
          break;
        case Logic__St_Forward_4:
          v_35 = (penc_r<penc_r_target);
          if (v_35) {
            v_right_St_1_OAS_St_Forward_4 = 150;
          } else {
            v_right_St_1_OAS_St_Forward_4 = 0;
          };
          v_34 = (penc_l<penc_l_target);
          if (v_34) {
            v_left_St_1_OAS_St_Forward_4 = 150;
          } else {
            v_left_St_1_OAS_St_Forward_4 = 0;
          };
          v_22 = (penc_r>=penc_r_target);
          v_21 = (penc_l>=penc_l_target);
          v_23 = (v_21&&v_22);
          if (v_23) {
            nr_St_Forward_4 = true;
            ns_St_Forward_4 = Logic__St_Delay_7;
          } else {
            nr_St_Forward_4 = false;
            ns_St_Forward_4 = Logic__St_Forward_4;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Forward_4;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Forward_4;
          ns = ns_St_Forward_4;
          nr = nr_St_Forward_4;
          break;
        case Logic__St_Delay_7:
          v_15 = (timer<=0);
          if (v_15) {
            nr_St_Delay_7 = true;
            ns_St_Delay_7 = Logic__St_RightTurn_2;
          } else {
            nr_St_Delay_7 = false;
            ns_St_Delay_7 = Logic__St_Delay_7;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_7;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_7;
          ns = ns_St_Delay_7;
          nr = nr_St_Delay_7;
          break;
        case Logic__St_RightTurn_2:
          v_14 = (penc_l<penc_l_target);
          if (v_14) {
            v_left_St_1_OAS_St_RightTurn_2 = 90;
          } else {
            v_left_St_1_OAS_St_RightTurn_2 = 0;
          };
          v_8 = (penc_l>=penc_l_target);
          if (v_8) {
            nr_St_RightTurn_2 = true;
            ns_St_RightTurn_2 = Logic__St_Delay_8;
          } else {
            nr_St_RightTurn_2 = false;
            ns_St_RightTurn_2 = Logic__St_RightTurn_2;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_RightTurn_2;
          v_right_St_1_OAS = v_right_St_1_OAS_St_RightTurn_2;
          ns = ns_St_RightTurn_2;
          nr = nr_St_RightTurn_2;
          break;
        case Logic__St_Delay_8:
          v_2 = (timer<=0);
          if (v_2) {
            nr_St_Delay_8 = true;
            ns_St_Delay_8 = Logic__St_Idle;
          } else {
            nr_St_Delay_8 = false;
            ns_St_Delay_8 = Logic__St_Delay_8;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Delay_8;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Delay_8;
          ns = ns_St_Delay_8;
          nr = nr_St_Delay_8;
          break;
        case Logic__St_Idle:
          v_1 = (timer<=0);
          if (v_1) {
            nr_St_Idle = true;
            ns_St_Idle = Logic__St_Idle;
          } else {
            nr_St_Idle = false;
            ns_St_Idle = Logic__St_Idle;
          };
          v_left_St_1_OAS = v_left_St_1_OAS_St_Idle;
          v_right_St_1_OAS = v_right_St_1_OAS_St_Idle;
          ns = ns_St_Idle;
          nr = nr_St_Idle;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_1_OAS;
      _out->v_right = v_right_St_1_OAS;
      break;
    default:
      break;
  };
  _out->cs = current_state;
  self->penc_r_target_1 = penc_r_target;
  self->penc_l_target_1 = penc_l_target;
  self->current_state_1 = current_state;
  self->timer_1 = timer;
  self->oas_busy_1 = oas_busy;
  self->pnr_1 = nr_1;
  self->ck = ns_1;
  switch (ck_1) {
    case Logic__St_1_OAS:
      self->v_157 = nr;
      self->v_156 = ns;
      switch (ck_2) {
        case Logic__St_Reverse_1:
          self->v_153 = penc_r_target;
          self->v_149 = false;
          self->v_148 = penc_l_target;
          self->v_144 = false;
          break;
        case Logic__St_Delay_1:
          self->v_139 = timer;
          self->v_136 = false;
          break;
        case Logic__St_RightTurn_1:
          self->v_133 = penc_l_target;
          self->v_129 = false;
          break;
        case Logic__St_Delay_2:
          self->v_126 = timer;
          self->v_123 = false;
          break;
        case Logic__St_Forward_1:
          self->v_119 = penc_r_target;
          self->v_115 = false;
          self->v_114 = penc_l_target;
          self->v_110 = false;
          break;
        case Logic__St_Delay_3:
          self->v_105 = timer;
          self->v_102 = false;
          break;
        case Logic__St_LeftTurn_1:
          self->v_99 = penc_r_target;
          self->v_95 = false;
          break;
        case Logic__St_Delay_4:
          self->v_92 = timer;
          self->v_89 = false;
          break;
        case Logic__St_Forward_2:
          self->v_85 = penc_r_target;
          self->v_81 = false;
          self->v_80 = penc_l_target;
          self->v_76 = false;
          break;
        case Logic__St_Forward_3:
          self->v_67 = penc_r_target;
          self->v_63 = false;
          self->v_62 = penc_l_target;
          self->v_58 = false;
          break;
        case Logic__St_Delay_5:
          self->v_53 = timer;
          self->v_50 = false;
          break;
        case Logic__St_LeftTurn_2:
          self->v_47 = penc_r_target;
          self->v_43 = false;
          break;
        case Logic__St_Delay_6:
          self->v_40 = timer;
          self->v_37 = false;
          break;
        case Logic__St_Forward_4:
          self->v_33 = penc_r_target;
          self->v_29 = false;
          self->v_28 = penc_l_target;
          self->v_24 = false;
          break;
        case Logic__St_Delay_7:
          self->v_19 = timer;
          self->v_16 = false;
          break;
        case Logic__St_RightTurn_2:
          self->v_13 = penc_l_target;
          self->v_9 = false;
          break;
        case Logic__St_Delay_8:
          self->v_6 = timer;
          self->v_3 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };;
}


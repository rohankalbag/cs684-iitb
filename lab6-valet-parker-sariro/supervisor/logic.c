/* --- Generated the 10/4/2023 at 3:9 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. feb. 9 23:14:49 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__pidline_reset(Logic__pidline_mem* self) {
  self->pnr = false;
  self->ck = Logic__St_OnLine;
  self->v_9 = true;
  self->v_6 = true;
}

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         int penc_l, int penc_r, Logic__pidline_out* _out,
                         Logic__pidline_mem* self) {
  
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int nr_St_NotOnLine;
  Logic__st ns_St_NotOnLine;
  int v_right_St_NotOnLine;
  int v_left_St_NotOnLine;
  int nr_St_OnLine;
  Logic__st ns_St_OnLine;
  int v_right_St_OnLine;
  int v_left_St_OnLine;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_8;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  Logic__st ns;
  int r;
  int nr;
  int error_sum;
  int raw_drive;
  int drive;
  int error;
  r = self->pnr;
  if (self->v_9) {
    v_11 = 0;
  } else {
    v_11 = self->v_10;
  };
  v_5 = (cfl/Logic__w_far);
  v_3 = (ccl/Logic__w_cent);
  v_1 = (ccr/Logic__w_cent);
  v = (cfr/Logic__w_far);
  v_2 = (v+v_1);
  v_4 = (v_2-v_3);
  error = (v_4-v_5);
  v_14 = (error/Logic__i_kp_line);
  v_12 = (error-v_11);
  v_13 = (v_12/Logic__i_kd_line);
  v_15 = (v_13+v_14);
  v_8 = (self->v_7+error);
  if (self->v_6) {
    error_sum = 0;
  } else {
    error_sum = v_8;
  };
  v_16 = (error_sum/Logic__i_ki_line);
  raw_drive = (v_15+v_16);
  v_18 = (raw_drive<-110);
  if (v_18) {
    v_19 = -110;
  } else {
    v_19 = raw_drive;
  };
  v_17 = (raw_drive>Logic__max_drive_line);
  if (v_17) {
    drive = 110;
  } else {
    drive = v_19;
  };
  switch (self->ck) {
    case Logic__St_OnLine:
      v_right_St_OnLine = (Logic__pid_fwd_speed_line+drive);
      v_left_St_OnLine = (Logic__pid_fwd_speed_line-drive);
      v_36 = (cfl>=Logic__white_threshold);
      v_34 = (ccl>=Logic__white_threshold);
      v_32 = (ccc>=Logic__white_threshold);
      v_30 = (ccr>=Logic__white_threshold);
      v_29 = (cfr>=Logic__white_threshold);
      v_31 = (v_29||v_30);
      v_33 = (v_31||v_32);
      v_35 = (v_33||v_34);
      v_37 = (v_35||v_36);
      v_38 = !(v_37);
      if (v_38) {
        nr_St_OnLine = true;
        ns_St_OnLine = Logic__St_NotOnLine;
      } else {
        nr_St_OnLine = false;
        ns_St_OnLine = Logic__St_OnLine;
      };
      _out->v_left = v_left_St_OnLine;
      _out->v_right = v_right_St_OnLine;
      ns = ns_St_OnLine;
      nr = nr_St_OnLine;
      break;
    case Logic__St_NotOnLine:
      v_right_St_NotOnLine = -90;
      v_left_St_NotOnLine = -90;
      v_27 = (cfl>=Logic__white_threshold);
      v_25 = (ccl>=Logic__white_threshold);
      v_23 = (ccc>=Logic__white_threshold);
      v_21 = (ccr>=Logic__white_threshold);
      v_20 = (cfr>=Logic__white_threshold);
      v_22 = (v_20||v_21);
      v_24 = (v_22||v_23);
      v_26 = (v_24||v_25);
      v_28 = (v_26||v_27);
      if (v_28) {
        nr_St_NotOnLine = true;
        ns_St_NotOnLine = Logic__St_OnLine;
      } else {
        nr_St_NotOnLine = false;
        ns_St_NotOnLine = Logic__St_NotOnLine;
      };
      _out->v_left = v_left_St_NotOnLine;
      _out->v_right = v_right_St_NotOnLine;
      ns = ns_St_NotOnLine;
      nr = nr_St_NotOnLine;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;
  self->v_10 = error;
  self->v_9 = false;
  self->v_7 = error_sum;
  self->v_6 = false;;
}

void Logic__pidline_black_reset(Logic__pidline_black_mem* self) {
  self->pnr = false;
  self->ck = Logic__St_1_OnLine;
  self->v_57 = true;
  self->v_54 = true;
}

void Logic__pidline_black_step(int bcfr, int bccr, int bccc, int bccl,
                               int bcfl, int penc_l, int penc_r,
                               Logic__pidline_black_out* _out,
                               Logic__pidline_black_mem* self) {
  
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int nr_St_1_NotOnLine;
  Logic__st_1 ns_St_1_NotOnLine;
  int v_right_St_1_NotOnLine;
  int v_left_St_1_NotOnLine;
  int nr_St_1_OnLine;
  Logic__st_1 ns_St_1_OnLine;
  int v_right_St_1_OnLine;
  int v_left_St_1_OnLine;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_56;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v;
  Logic__st_1 ns;
  int r;
  int nr;
  int error_sum;
  int raw_drive;
  int drive;
  int error;
  int cfr;
  int ccr;
  int ccc;
  int ccl;
  int cfl;
  r = self->pnr;
  if (self->v_57) {
    v_59 = 0;
  } else {
    v_59 = self->v_58;
  };
  v_47 = (Logic__up_cap-bcfl);
  v_46 = (bcfl>Logic__up_cap);
  if (v_46) {
    cfl = 0;
  } else {
    cfl = v_47;
  };
  v_53 = (cfl/Logic__w_far);
  v_45 = (Logic__up_cap-bccl);
  v_44 = (bccl>Logic__up_cap);
  if (v_44) {
    ccl = 0;
  } else {
    ccl = v_45;
  };
  v_51 = (ccl/Logic__w_cent);
  v_43 = (Logic__up_cap-bccc);
  v_42 = (bccc>Logic__up_cap);
  if (v_42) {
    ccc = 0;
  } else {
    ccc = v_43;
  };
  v_41 = (Logic__up_cap-bccr);
  v_40 = (bccr>Logic__up_cap);
  if (v_40) {
    ccr = 0;
  } else {
    ccr = v_41;
  };
  v_49 = (ccr/Logic__w_cent);
  v_39 = (Logic__up_cap-bcfr);
  v = (bcfr>Logic__up_cap);
  if (v) {
    cfr = 0;
  } else {
    cfr = v_39;
  };
  v_48 = (cfr/Logic__w_far);
  v_50 = (v_48+v_49);
  v_52 = (v_50-v_51);
  error = (v_52-v_53);
  v_62 = (error/Logic__i_kp_line);
  v_60 = (error-v_59);
  v_61 = (v_60/Logic__i_kd_line);
  v_63 = (v_61+v_62);
  v_56 = (self->v_55+error);
  if (self->v_54) {
    error_sum = 0;
  } else {
    error_sum = v_56;
  };
  v_64 = (error_sum/Logic__i_ki_line);
  raw_drive = (v_63+v_64);
  v_66 = (raw_drive<-110);
  if (v_66) {
    v_67 = -110;
  } else {
    v_67 = raw_drive;
  };
  v_65 = (raw_drive>Logic__max_drive_line);
  if (v_65) {
    drive = 110;
  } else {
    drive = v_67;
  };
  switch (self->ck) {
    case Logic__St_1_OnLine:
      v_right_St_1_OnLine = (Logic__pid_fwd_black_speed_line+drive);
      v_left_St_1_OnLine = (Logic__pid_fwd_black_speed_line-drive);
      v_84 = (cfl>=Logic__black_white_threshold);
      v_82 = (ccl>=Logic__black_white_threshold);
      v_80 = (ccc>=Logic__black_white_threshold);
      v_78 = (ccr>=Logic__black_white_threshold);
      v_77 = (cfr>=Logic__black_white_threshold);
      v_79 = (v_77||v_78);
      v_81 = (v_79||v_80);
      v_83 = (v_81||v_82);
      v_85 = (v_83||v_84);
      v_86 = !(v_85);
      if (v_86) {
        nr_St_1_OnLine = true;
        ns_St_1_OnLine = Logic__St_1_NotOnLine;
      } else {
        nr_St_1_OnLine = false;
        ns_St_1_OnLine = Logic__St_1_OnLine;
      };
      _out->v_left = v_left_St_1_OnLine;
      _out->v_right = v_right_St_1_OnLine;
      ns = ns_St_1_OnLine;
      nr = nr_St_1_OnLine;
      break;
    case Logic__St_1_NotOnLine:
      v_right_St_1_NotOnLine = -90;
      v_left_St_1_NotOnLine = -90;
      v_75 = (cfl>=Logic__black_white_threshold);
      v_73 = (ccl>=Logic__black_white_threshold);
      v_71 = (ccc>=Logic__black_white_threshold);
      v_69 = (ccr>=Logic__black_white_threshold);
      v_68 = (cfr>=Logic__black_white_threshold);
      v_70 = (v_68||v_69);
      v_72 = (v_70||v_71);
      v_74 = (v_72||v_73);
      v_76 = (v_74||v_75);
      if (v_76) {
        nr_St_1_NotOnLine = true;
        ns_St_1_NotOnLine = Logic__St_1_OnLine;
      } else {
        nr_St_1_NotOnLine = false;
        ns_St_1_NotOnLine = Logic__St_1_NotOnLine;
      };
      _out->v_left = v_left_St_1_NotOnLine;
      _out->v_right = v_right_St_1_NotOnLine;
      ns = ns_St_1_NotOnLine;
      nr = nr_St_1_NotOnLine;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;
  self->v_58 = error;
  self->v_57 = false;
  self->v_55 = error_sum;
  self->v_54 = false;;
}

void Logic__pidwallalign_reset(Logic__pidwallalign_mem* self) {
  self->v_92 = true;
  self->v_89 = true;
}

void Logic__pidwallalign_step(int ir_d_left1, int ir_d_left2, int ir_d_left3,
                              Logic__pidwallalign_out* _out,
                              Logic__pidwallalign_mem* self) {
  
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_91;
  int v_88;
  int v_87;
  int v;
  int error_sum;
  int raw_drive;
  int drive;
  int error;
  if (self->v_92) {
    v_94 = 0;
  } else {
    v_94 = self->v_93;
  };
  if (ir_d_left2) {
    v_87 = -30;
  } else {
    v_87 = -70;
  };
  if (ir_d_left3) {
    v_88 = v_87;
    v = 15;
  } else {
    v_88 = -30;
    v = 30;
  };
  if (ir_d_left1) {
    error = v;
  } else {
    error = v_88;
  };
  v_97 = (error/Logic__i_kp_wall);
  v_95 = (error-v_94);
  v_96 = (v_95/Logic__i_kd_wall);
  v_98 = (v_96+v_97);
  v_91 = (self->v_90+error);
  if (self->v_89) {
    error_sum = 0;
  } else {
    error_sum = v_91;
  };
  v_99 = (error_sum/Logic__i_ki_wall);
  raw_drive = (v_98+v_99);
  v_101 = (raw_drive<-130);
  if (v_101) {
    v_102 = -130;
  } else {
    v_102 = raw_drive;
  };
  v_100 = (raw_drive>Logic__max_drive_wall);
  if (v_100) {
    drive = 130;
  } else {
    drive = v_102;
  };
  _out->v_right = (Logic__pid_fwd_speed_wall+drive);
  _out->v_left = (Logic__pid_fwd_speed_wall-drive);
  self->v_93 = error;
  self->v_92 = false;
  self->v_90 = error_sum;
  self->v_89 = false;;
}

void Logic__obstacleavoider_reset(Logic__obstacleavoider_mem* self) {
  Logic__pidwallalign_reset(&self->pidwallalign);
  self->v_132 = true;
  self->v_128 = true;
  self->v_121 = true;
  self->v_116 = true;
  self->v_109 = true;
  self->v_105 = true;
  self->pnr = false;
  self->ck = Logic__St_2_Reverse_1;
}

void Logic__obstacleavoider_step(int ir_d_left1, int ir_d_left2,
                                 int ir_d_left3, int white_line, int penc_l,
                                 int penc_r,
                                 Logic__obstacleavoider_out* _out,
                                 Logic__obstacleavoider_mem* self) {
  Logic__pidwallalign_out Logic__pidwallalign_out_st;
  
  int v_114;
  int v_113;
  int v_111;
  int v_110;
  int v_107;
  int v_106;
  int v_104;
  int v_103;
  int v;
  int r_2;
  int v_119;
  int v_117;
  int v_115;
  int v_123;
  int v_122;
  int v_120;
  int v_137;
  int v_136;
  int v_134;
  int v_133;
  int v_130;
  int v_129;
  int v_127;
  int v_126;
  int v_125;
  int nr_St_2_ExitState;
  Logic__st_2 ns_St_2_ExitState;
  int penc_r_target_St_2_ExitState;
  int penc_l_target_St_2_ExitState;
  int timer_St_2_ExitState;
  int oas_done_St_2_ExitState;
  int v_right_St_2_ExitState;
  int v_left_St_2_ExitState;
  int nr_St_2_Reverse_2;
  Logic__st_2 ns_St_2_Reverse_2;
  int penc_r_target_St_2_Reverse_2;
  int penc_l_target_St_2_Reverse_2;
  int timer_St_2_Reverse_2;
  int oas_done_St_2_Reverse_2;
  int v_right_St_2_Reverse_2;
  int v_left_St_2_Reverse_2;
  int nr_St_2_PIDWallFollower;
  Logic__st_2 ns_St_2_PIDWallFollower;
  int penc_r_target_St_2_PIDWallFollower;
  int penc_l_target_St_2_PIDWallFollower;
  int timer_St_2_PIDWallFollower;
  int oas_done_St_2_PIDWallFollower;
  int v_right_St_2_PIDWallFollower;
  int v_left_St_2_PIDWallFollower;
  int nr_St_2_Delay_2;
  Logic__st_2 ns_St_2_Delay_2;
  int penc_r_target_St_2_Delay_2;
  int penc_l_target_St_2_Delay_2;
  int timer_St_2_Delay_2;
  int oas_done_St_2_Delay_2;
  int v_right_St_2_Delay_2;
  int v_left_St_2_Delay_2;
  int nr_St_2_LeftTurn_1;
  Logic__st_2 ns_St_2_LeftTurn_1;
  int penc_r_target_St_2_LeftTurn_1;
  int penc_l_target_St_2_LeftTurn_1;
  int timer_St_2_LeftTurn_1;
  int oas_done_St_2_LeftTurn_1;
  int v_right_St_2_LeftTurn_1;
  int v_left_St_2_LeftTurn_1;
  int nr_St_2_Reverse_1;
  Logic__st_2 ns_St_2_Reverse_1;
  int penc_r_target_St_2_Reverse_1;
  int penc_l_target_St_2_Reverse_1;
  int timer_St_2_Reverse_1;
  int oas_done_St_2_Reverse_1;
  int v_right_St_2_Reverse_1;
  int v_left_St_2_Reverse_1;
  Logic__st_2 ns;
  int r;
  int nr;
  int timer;
  int penc_l_target;
  int penc_r_target;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_2_Reverse_1:
      timer_St_2_Reverse_1 = self->timer_1;
      oas_done_St_2_Reverse_1 = false;
      v_134 = (penc_r+Logic__rev_count);
      if (self->v_132) {
        v_133 = true;
      } else {
        v_133 = r;
      };
      if (v_133) {
        penc_r_target_St_2_Reverse_1 = v_134;
      } else {
        penc_r_target_St_2_Reverse_1 = self->v_135;
      };
      v_130 = (penc_l+Logic__rev_count);
      if (self->v_128) {
        v_129 = true;
      } else {
        v_129 = r;
      };
      if (v_129) {
        penc_l_target_St_2_Reverse_1 = v_130;
      } else {
        penc_l_target_St_2_Reverse_1 = self->v_131;
      };
      _out->oas_done = oas_done_St_2_Reverse_1;
      timer = timer_St_2_Reverse_1;
      penc_l_target = penc_l_target_St_2_Reverse_1;
      v_136 = (penc_l<penc_l_target);
      if (v_136) {
        v_left_St_2_Reverse_1 = -110;
      } else {
        v_left_St_2_Reverse_1 = 0;
      };
      v_125 = (penc_l>=penc_l_target);
      _out->v_left = v_left_St_2_Reverse_1;
      penc_r_target = penc_r_target_St_2_Reverse_1;
      v_137 = (penc_r<penc_r_target);
      if (v_137) {
        v_right_St_2_Reverse_1 = -110;
      } else {
        v_right_St_2_Reverse_1 = 0;
      };
      v_126 = (penc_r>=penc_r_target);
      v_127 = (v_125&&v_126);
      if (v_127) {
        nr_St_2_Reverse_1 = true;
        ns_St_2_Reverse_1 = Logic__St_2_LeftTurn_1;
      } else {
        nr_St_2_Reverse_1 = false;
        ns_St_2_Reverse_1 = Logic__St_2_Reverse_1;
      };
      _out->v_right = v_right_St_2_Reverse_1;
      ns = ns_St_2_Reverse_1;
      nr = nr_St_2_Reverse_1;
      self->v_135 = penc_r_target;
      self->v_132 = false;
      self->v_131 = penc_l_target;
      self->v_128 = false;
      break;
    case Logic__St_2_LeftTurn_1:
      penc_l_target_St_2_LeftTurn_1 = self->penc_l_target_1;
      timer_St_2_LeftTurn_1 = self->timer_1;
      oas_done_St_2_LeftTurn_1 = false;
      v_right_St_2_LeftTurn_1 = 110;
      v_left_St_2_LeftTurn_1 = -40;
      v_123 = (penc_r+Logic__init_left_turn_count);
      if (self->v_121) {
        v_122 = true;
      } else {
        v_122 = r;
      };
      if (v_122) {
        penc_r_target_St_2_LeftTurn_1 = v_123;
      } else {
        penc_r_target_St_2_LeftTurn_1 = self->v_124;
      };
      _out->oas_done = oas_done_St_2_LeftTurn_1;
      timer = timer_St_2_LeftTurn_1;
      penc_l_target = penc_l_target_St_2_LeftTurn_1;
      _out->v_left = v_left_St_2_LeftTurn_1;
      penc_r_target = penc_r_target_St_2_LeftTurn_1;
      v_120 = (penc_r>=penc_r_target);
      if (v_120) {
        nr_St_2_LeftTurn_1 = true;
        ns_St_2_LeftTurn_1 = Logic__St_2_Delay_2;
      } else {
        nr_St_2_LeftTurn_1 = false;
        ns_St_2_LeftTurn_1 = Logic__St_2_LeftTurn_1;
      };
      _out->v_right = v_right_St_2_LeftTurn_1;
      ns = ns_St_2_LeftTurn_1;
      nr = nr_St_2_LeftTurn_1;
      self->v_124 = penc_r_target;
      self->v_121 = false;
      break;
    case Logic__St_2_Delay_2:
      penc_r_target_St_2_Delay_2 = self->penc_r_target_1;
      penc_l_target_St_2_Delay_2 = self->penc_l_target_1;
      oas_done_St_2_Delay_2 = false;
      v_119 = (self->v_118-1);
      if (self->v_116) {
        v_117 = true;
      } else {
        v_117 = r;
      };
      if (v_117) {
        timer_St_2_Delay_2 = 100;
      } else {
        timer_St_2_Delay_2 = v_119;
      };
      v_right_St_2_Delay_2 = 0;
      v_left_St_2_Delay_2 = 0;
      _out->oas_done = oas_done_St_2_Delay_2;
      timer = timer_St_2_Delay_2;
      v_115 = (timer<=0);
      if (v_115) {
        nr_St_2_Delay_2 = true;
        ns_St_2_Delay_2 = Logic__St_2_PIDWallFollower;
      } else {
        nr_St_2_Delay_2 = false;
        ns_St_2_Delay_2 = Logic__St_2_Delay_2;
      };
      penc_l_target = penc_l_target_St_2_Delay_2;
      _out->v_left = v_left_St_2_Delay_2;
      penc_r_target = penc_r_target_St_2_Delay_2;
      _out->v_right = v_right_St_2_Delay_2;
      ns = ns_St_2_Delay_2;
      nr = nr_St_2_Delay_2;
      self->v_118 = timer;
      self->v_116 = false;
      break;
    case Logic__St_2_PIDWallFollower:
      penc_r_target_St_2_PIDWallFollower = self->penc_r_target_1;
      penc_l_target_St_2_PIDWallFollower = self->penc_l_target_1;
      timer_St_2_PIDWallFollower = self->timer_1;
      oas_done_St_2_PIDWallFollower = false;
      if (white_line) {
        nr_St_2_PIDWallFollower = true;
        ns_St_2_PIDWallFollower = Logic__St_2_Reverse_2;
      } else {
        nr_St_2_PIDWallFollower = false;
        ns_St_2_PIDWallFollower = Logic__St_2_PIDWallFollower;
      };
      r_2 = r;
      if (r_2) {
        Logic__pidwallalign_reset(&self->pidwallalign);
      };
      Logic__pidwallalign_step(ir_d_left1, ir_d_left2, ir_d_left3,
                               &Logic__pidwallalign_out_st,
                               &self->pidwallalign);
      v_left_St_2_PIDWallFollower = Logic__pidwallalign_out_st.v_left;
      v_right_St_2_PIDWallFollower = Logic__pidwallalign_out_st.v_right;
      _out->oas_done = oas_done_St_2_PIDWallFollower;
      timer = timer_St_2_PIDWallFollower;
      penc_l_target = penc_l_target_St_2_PIDWallFollower;
      _out->v_left = v_left_St_2_PIDWallFollower;
      penc_r_target = penc_r_target_St_2_PIDWallFollower;
      _out->v_right = v_right_St_2_PIDWallFollower;
      ns = ns_St_2_PIDWallFollower;
      nr = nr_St_2_PIDWallFollower;
      break;
    case Logic__St_2_Reverse_2:
      timer_St_2_Reverse_2 = self->timer_1;
      oas_done_St_2_Reverse_2 = false;
      v_111 = (penc_r+Logic__fwd_count);
      if (self->v_109) {
        v_110 = true;
      } else {
        v_110 = r;
      };
      if (v_110) {
        penc_r_target_St_2_Reverse_2 = v_111;
      } else {
        penc_r_target_St_2_Reverse_2 = self->v_112;
      };
      v_107 = (penc_l+Logic__fwd_count);
      if (self->v_105) {
        v_106 = true;
      } else {
        v_106 = r;
      };
      if (v_106) {
        penc_l_target_St_2_Reverse_2 = v_107;
      } else {
        penc_l_target_St_2_Reverse_2 = self->v_108;
      };
      _out->oas_done = oas_done_St_2_Reverse_2;
      timer = timer_St_2_Reverse_2;
      penc_l_target = penc_l_target_St_2_Reverse_2;
      v_113 = (penc_l<penc_l_target);
      if (v_113) {
        v_left_St_2_Reverse_2 = 60;
      } else {
        v_left_St_2_Reverse_2 = 0;
      };
      v = (penc_l>=penc_l_target);
      _out->v_left = v_left_St_2_Reverse_2;
      penc_r_target = penc_r_target_St_2_Reverse_2;
      v_114 = (penc_r<penc_r_target);
      if (v_114) {
        v_right_St_2_Reverse_2 = 80;
      } else {
        v_right_St_2_Reverse_2 = 0;
      };
      v_103 = (penc_r>=penc_r_target);
      v_104 = (v&&v_103);
      if (v_104) {
        nr_St_2_Reverse_2 = true;
        ns_St_2_Reverse_2 = Logic__St_2_ExitState;
      } else {
        nr_St_2_Reverse_2 = false;
        ns_St_2_Reverse_2 = Logic__St_2_Reverse_2;
      };
      _out->v_right = v_right_St_2_Reverse_2;
      ns = ns_St_2_Reverse_2;
      nr = nr_St_2_Reverse_2;
      self->v_112 = penc_r_target;
      self->v_109 = false;
      self->v_108 = penc_l_target;
      self->v_105 = false;
      break;
    case Logic__St_2_ExitState:
      penc_r_target_St_2_ExitState = self->penc_r_target_1;
      penc_l_target_St_2_ExitState = self->penc_l_target_1;
      timer_St_2_ExitState = self->timer_1;
      oas_done_St_2_ExitState = true;
      v_right_St_2_ExitState = 0;
      v_left_St_2_ExitState = 0;
      nr_St_2_ExitState = false;
      ns_St_2_ExitState = Logic__St_2_ExitState;
      _out->oas_done = oas_done_St_2_ExitState;
      timer = timer_St_2_ExitState;
      penc_l_target = penc_l_target_St_2_ExitState;
      _out->v_left = v_left_St_2_ExitState;
      penc_r_target = penc_r_target_St_2_ExitState;
      _out->v_right = v_right_St_2_ExitState;
      ns = ns_St_2_ExitState;
      nr = nr_St_2_ExitState;
      break;
    default:
      break;
  };
  self->penc_r_target_1 = penc_r_target;
  self->penc_l_target_1 = penc_l_target;
  self->timer_1 = timer;
  self->pnr = nr;
  self->ck = ns;;
}

void Logic__parkingnode_reset(Logic__parkingnode_mem* self) {
  Logic__pidline_black_reset(&self->pidline_black);
  self->v_158 = true;
  self->v_149 = true;
  self->v_144 = true;
  self->v_140 = true;
  self->pnr = false;
  self->ck = Logic__St_3_LineFollowing;
}

void Logic__parkingnode_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                             int penc_l, int penc_r, int ir_d_left1,
                             int ir_d_left2, int ir_d_left3,
                             Logic__parkingnode_out* _out,
                             Logic__parkingnode_mem* self) {
  Logic__pidline_black_out Logic__pidline_black_out_st;
  
  int v_146;
  int v_145;
  int v_142;
  int v_141;
  int v_139;
  int v_138;
  int v;
  int v_151;
  int v_150;
  int v_148;
  int v_161;
  int v_159;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int r_3;
  int nr_St_3_ExitState;
  Logic__st_3 ns_St_3_ExitState;
  int penc_l_target_St_3_ExitState;
  int penc_r_target_St_3_ExitState;
  int timer_St_3_ExitState;
  int v_right_St_3_ExitState;
  int v_left_St_3_ExitState;
  int nr_St_3_Forward_1;
  Logic__st_3 ns_St_3_Forward_1;
  int penc_l_target_St_3_Forward_1;
  int penc_r_target_St_3_Forward_1;
  int timer_St_3_Forward_1;
  int v_right_St_3_Forward_1;
  int v_left_St_3_Forward_1;
  int nr_St_3_RightTurn_1;
  Logic__st_3 ns_St_3_RightTurn_1;
  int penc_l_target_St_3_RightTurn_1;
  int penc_r_target_St_3_RightTurn_1;
  int timer_St_3_RightTurn_1;
  int v_right_St_3_RightTurn_1;
  int v_left_St_3_RightTurn_1;
  int nr_St_3_LineFollowing;
  Logic__st_3 ns_St_3_LineFollowing;
  int penc_l_target_St_3_LineFollowing;
  int penc_r_target_St_3_LineFollowing;
  int timer_St_3_LineFollowing;
  int v_right_St_3_LineFollowing;
  int v_left_St_3_LineFollowing;
  Logic__st_3 ns;
  int r;
  int nr;
  int timer;
  int penc_r_target;
  int penc_l_target;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_3_LineFollowing:
      penc_l_target_St_3_LineFollowing = self->penc_l_target_2;
      penc_r_target_St_3_LineFollowing = self->penc_r_target_2;
      v_161 = (self->v_160-1);
      if (self->v_158) {
        v_159 = true;
      } else {
        v_159 = r;
      };
      if (v_159) {
        timer_St_3_LineFollowing = 800;
      } else {
        timer_St_3_LineFollowing = v_161;
      };
      v_154 = (ir_d_left1||ir_d_left2);
      v_155 = (v_154||ir_d_left3);
      v_156 = !(v_155);
      r_3 = r;
      if (r_3) {
        Logic__pidline_black_reset(&self->pidline_black);
      };
      Logic__pidline_black_step(cfr, ccr, ccc, ccl, cfl, penc_l, penc_r,
                                &Logic__pidline_black_out_st,
                                &self->pidline_black);
      v_left_St_3_LineFollowing = Logic__pidline_black_out_st.v_left;
      v_right_St_3_LineFollowing = Logic__pidline_black_out_st.v_right;
      _out->v_left = v_left_St_3_LineFollowing;
      _out->v_right = v_right_St_3_LineFollowing;
      timer = timer_St_3_LineFollowing;
      v_153 = (timer<=0);
      v_157 = (v_153&&v_156);
      if (v_157) {
        nr_St_3_LineFollowing = true;
        ns_St_3_LineFollowing = Logic__St_3_RightTurn_1;
      } else {
        nr_St_3_LineFollowing = false;
        ns_St_3_LineFollowing = Logic__St_3_LineFollowing;
      };
      penc_r_target = penc_r_target_St_3_LineFollowing;
      penc_l_target = penc_l_target_St_3_LineFollowing;
      ns = ns_St_3_LineFollowing;
      nr = nr_St_3_LineFollowing;
      self->v_160 = timer;
      self->v_158 = false;
      break;
    case Logic__St_3_RightTurn_1:
      penc_l_target_St_3_RightTurn_1 = self->penc_l_target_2;
      timer_St_3_RightTurn_1 = self->timer_2;
      v_right_St_3_RightTurn_1 = -90;
      v_left_St_3_RightTurn_1 = 90;
      v_151 = (penc_r+Logic__init_right_turn_count);
      if (self->v_149) {
        v_150 = true;
      } else {
        v_150 = r;
      };
      if (v_150) {
        penc_r_target_St_3_RightTurn_1 = v_151;
      } else {
        penc_r_target_St_3_RightTurn_1 = self->v_152;
      };
      _out->v_left = v_left_St_3_RightTurn_1;
      _out->v_right = v_right_St_3_RightTurn_1;
      timer = timer_St_3_RightTurn_1;
      penc_r_target = penc_r_target_St_3_RightTurn_1;
      v_148 = (penc_r>=penc_r_target);
      if (v_148) {
        nr_St_3_RightTurn_1 = true;
        ns_St_3_RightTurn_1 = Logic__St_3_Forward_1;
      } else {
        nr_St_3_RightTurn_1 = false;
        ns_St_3_RightTurn_1 = Logic__St_3_RightTurn_1;
      };
      penc_l_target = penc_l_target_St_3_RightTurn_1;
      ns = ns_St_3_RightTurn_1;
      nr = nr_St_3_RightTurn_1;
      self->v_152 = penc_r_target;
      self->v_149 = false;
      break;
    case Logic__St_3_Forward_1:
      timer_St_3_Forward_1 = self->timer_2;
      v_right_St_3_Forward_1 = 80;
      v_left_St_3_Forward_1 = 80;
      v_146 = (penc_r+Logic__fwd_count_1);
      if (self->v_144) {
        v_145 = true;
      } else {
        v_145 = r;
      };
      if (v_145) {
        penc_r_target_St_3_Forward_1 = v_146;
      } else {
        penc_r_target_St_3_Forward_1 = self->v_147;
      };
      v_142 = (penc_l+Logic__fwd_count_1);
      if (self->v_140) {
        v_141 = true;
      } else {
        v_141 = r;
      };
      if (v_141) {
        penc_l_target_St_3_Forward_1 = v_142;
      } else {
        penc_l_target_St_3_Forward_1 = self->v_143;
      };
      _out->v_left = v_left_St_3_Forward_1;
      _out->v_right = v_right_St_3_Forward_1;
      timer = timer_St_3_Forward_1;
      penc_r_target = penc_r_target_St_3_Forward_1;
      v_138 = (penc_r>=penc_r_target);
      penc_l_target = penc_l_target_St_3_Forward_1;
      v = (penc_l>=penc_l_target);
      v_139 = (v||v_138);
      if (v_139) {
        nr_St_3_Forward_1 = true;
        ns_St_3_Forward_1 = Logic__St_3_ExitState;
      } else {
        nr_St_3_Forward_1 = false;
        ns_St_3_Forward_1 = Logic__St_3_Forward_1;
      };
      ns = ns_St_3_Forward_1;
      nr = nr_St_3_Forward_1;
      self->v_147 = penc_r_target;
      self->v_144 = false;
      self->v_143 = penc_l_target;
      self->v_140 = false;
      break;
    case Logic__St_3_ExitState:
      penc_l_target_St_3_ExitState = self->penc_l_target_2;
      penc_r_target_St_3_ExitState = self->penc_r_target_2;
      timer_St_3_ExitState = self->timer_2;
      v_right_St_3_ExitState = 0;
      v_left_St_3_ExitState = 0;
      nr_St_3_ExitState = false;
      ns_St_3_ExitState = Logic__St_3_ExitState;
      _out->v_left = v_left_St_3_ExitState;
      _out->v_right = v_right_St_3_ExitState;
      timer = timer_St_3_ExitState;
      penc_r_target = penc_r_target_St_3_ExitState;
      penc_l_target = penc_l_target_St_3_ExitState;
      ns = ns_St_3_ExitState;
      nr = nr_St_3_ExitState;
      break;
    default:
      break;
  };
  self->penc_l_target_2 = penc_l_target;
  self->penc_r_target_2 = penc_r_target;
  self->timer_2 = timer;
  self->pnr = nr;
  self->ck = ns;;
}

void Logic__finallogic_reset(Logic__finallogic_mem* self) {
  Logic__pidline_reset(&self->pidline);
  Logic__obstacleavoider_reset(&self->obstacleavoider);
  self->pnr_1 = false;
  self->v_162 = false;
  self->v = Logic__St_4_LineFollowing;
  self->ck = Logic__St_5_StartState;
}

void Logic__finallogic_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                            int penc_l, int penc_r, int ir_d_front,
                            int ir_d_left1, int ir_d_left2, int ir_d_left3,
                            Logic__finallogic_out* _out,
                            Logic__finallogic_mem* self) {
  Logic__pidline_out Logic__pidline_out_st;
  Logic__obstacleavoider_out Logic__obstacleavoider_out_st;
  
  int r_4;
  int oas_done;
  int white_line;
  int r_5;
  int nr_St_4_ObstacleAvoider;
  Logic__st_4 ns_St_4_ObstacleAvoider;
  int current_state_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
  int v_right_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
  int v_left_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
  int nr_St_4_LineFollowing;
  Logic__st_4 ns_St_4_LineFollowing;
  int current_state_St_5_WhiteLineFollower_St_4_LineFollowing;
  int v_right_St_5_WhiteLineFollower_St_4_LineFollowing;
  int v_left_St_5_WhiteLineFollower_St_4_LineFollowing;
  Logic__st_4 ck_1;
  Logic__st_4 ns;
  int r;
  int nr;
  int pnr;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int nr_1_St_5_WhiteLineFollower;
  Logic__st_5 ns_1_St_5_WhiteLineFollower;
  int current_state_St_5_WhiteLineFollower;
  int v_right_St_5_WhiteLineFollower;
  int v_left_St_5_WhiteLineFollower;
  int nr_1_St_5_StartState;
  Logic__st_5 ns_1_St_5_StartState;
  int current_state_St_5_StartState;
  int v_right_St_5_StartState;
  int v_left_St_5_StartState;
  Logic__st_5 ns_1;
  int r_1;
  int nr_1;
  int current_state;
  r_1 = self->pnr_1;
  switch (self->ck) {
    case Logic__St_5_StartState:
      current_state_St_5_StartState = 1;
      v_right_St_5_StartState = 100;
      v_left_St_5_StartState = 100;
      v_170 = (cfl<Logic__white_threshold);
      v_168 = (ccl<Logic__white_threshold);
      v_166 = (ccc<Logic__white_threshold);
      v_164 = (ccr<Logic__white_threshold);
      v_163 = (cfr<Logic__white_threshold);
      v_165 = (v_163||v_164);
      v_167 = (v_165||v_166);
      v_169 = (v_167||v_168);
      v_171 = (v_169||v_170);
      if (v_171) {
        nr_1_St_5_StartState = true;
        ns_1_St_5_StartState = Logic__St_5_WhiteLineFollower;
      } else {
        nr_1_St_5_StartState = false;
        ns_1_St_5_StartState = Logic__St_5_StartState;
      };
      ns_1 = ns_1_St_5_StartState;
      nr_1 = nr_1_St_5_StartState;
      _out->v_left = v_left_St_5_StartState;
      _out->v_right = v_right_St_5_StartState;
      current_state = current_state_St_5_StartState;
      break;
    case Logic__St_5_WhiteLineFollower:
      if (r_1) {
        pnr = false;
      } else {
        pnr = self->v_162;
      };
      r = pnr;
      if (r_1) {
        ck_1 = Logic__St_4_LineFollowing;
      } else {
        ck_1 = self->v;
      };
      nr_1_St_5_WhiteLineFollower = false;
      ns_1_St_5_WhiteLineFollower = Logic__St_5_WhiteLineFollower;
      ns_1 = ns_1_St_5_WhiteLineFollower;
      nr_1 = nr_1_St_5_WhiteLineFollower;
      switch (ck_1) {
        case Logic__St_4_LineFollowing:
          current_state_St_5_WhiteLineFollower_St_4_LineFollowing = 2;
          if (ir_d_front) {
            nr_St_4_LineFollowing = true;
            ns_St_4_LineFollowing = Logic__St_4_ObstacleAvoider;
          } else {
            nr_St_4_LineFollowing = false;
            ns_St_4_LineFollowing = Logic__St_4_LineFollowing;
          };
          r_5 = (r_1||r);
          if (r_5) {
            Logic__pidline_reset(&self->pidline);
          };
          Logic__pidline_step(cfr, ccr, ccc, ccl, cfl, penc_l, penc_r,
                              &Logic__pidline_out_st, &self->pidline);
          v_left_St_5_WhiteLineFollower_St_4_LineFollowing = Logic__pidline_out_st.v_left;
          v_right_St_5_WhiteLineFollower_St_4_LineFollowing = Logic__pidline_out_st.v_right;
          v_left_St_5_WhiteLineFollower = v_left_St_5_WhiteLineFollower_St_4_LineFollowing;
          v_right_St_5_WhiteLineFollower = v_right_St_5_WhiteLineFollower_St_4_LineFollowing;
          current_state_St_5_WhiteLineFollower = current_state_St_5_WhiteLineFollower_St_4_LineFollowing;
          ns = ns_St_4_LineFollowing;
          nr = nr_St_4_LineFollowing;
          break;
        case Logic__St_4_ObstacleAvoider:
          white_line = (ccl>=Logic__white_threshold_wall);
          current_state_St_5_WhiteLineFollower_St_4_ObstacleAvoider = 3;
          r_4 = (r_1||r);
          if (r_4) {
            Logic__obstacleavoider_reset(&self->obstacleavoider);
          };
          Logic__obstacleavoider_step(ir_d_left1, ir_d_left2, ir_d_left3,
                                      white_line, penc_l, penc_r,
                                      &Logic__obstacleavoider_out_st,
                                      &self->obstacleavoider);
          v_left_St_5_WhiteLineFollower_St_4_ObstacleAvoider = Logic__obstacleavoider_out_st.v_left;
          v_right_St_5_WhiteLineFollower_St_4_ObstacleAvoider = Logic__obstacleavoider_out_st.v_right;
          oas_done = Logic__obstacleavoider_out_st.oas_done;
          if (oas_done) {
            nr_St_4_ObstacleAvoider = true;
            ns_St_4_ObstacleAvoider = Logic__St_4_LineFollowing;
          } else {
            nr_St_4_ObstacleAvoider = false;
            ns_St_4_ObstacleAvoider = Logic__St_4_ObstacleAvoider;
          };
          v_left_St_5_WhiteLineFollower = v_left_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
          v_right_St_5_WhiteLineFollower = v_right_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
          current_state_St_5_WhiteLineFollower = current_state_St_5_WhiteLineFollower_St_4_ObstacleAvoider;
          ns = ns_St_4_ObstacleAvoider;
          nr = nr_St_4_ObstacleAvoider;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_5_WhiteLineFollower;
      _out->v_right = v_right_St_5_WhiteLineFollower;
      current_state = current_state_St_5_WhiteLineFollower;
      break;
    default:
      break;
  };
  _out->cs = current_state;
  self->current_state_1 = current_state;
  self->pnr_1 = nr_1;
  switch (self->ck) {
    case Logic__St_5_WhiteLineFollower:
      self->v_162 = nr;
      self->v = ns;
      break;
    default:
      break;
  };
  self->ck = ns_1;;
}


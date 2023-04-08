/* --- Generated the 9/4/2023 at 4:7 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s finallogic -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__pidline_reset(Logic__pidline_mem* self) {
  self->v_9 = true;
  self->v_6 = true;
}

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         Logic__pidline_out* _out, Logic__pidline_mem* self) {
  
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
  int error_sum;
  int raw_drive;
  int drive;
  int error;
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
  _out->v_right = (Logic__pid_fwd_speed_line+drive);
  _out->v_left = (Logic__pid_fwd_speed_line-drive);
  self->v_10 = error;
  self->v_9 = false;
  self->v_7 = error_sum;
  self->v_6 = false;;
}

void Logic__pidwallalign_reset(Logic__pidwallalign_mem* self) {
  self->v_24 = true;
  self->v_21 = true;
}

void Logic__pidwallalign_step(int ir_d_left1, int ir_d_left2,
                              Logic__pidwallalign_out* _out,
                              Logic__pidwallalign_mem* self) {
  
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_23;
  int v_20;
  int v;
  int error_sum;
  int raw_drive;
  int drive;
  int error;
  if (self->v_24) {
    v_26 = 0;
  } else {
    v_26 = self->v_25;
  };
  if (ir_d_left2) {
    v_20 = -40;
    v = 15;
  } else {
    v_20 = -15;
    v = 30;
  };
  if (ir_d_left1) {
    error = v;
  } else {
    error = v_20;
  };
  v_29 = (error/Logic__i_kp_wall);
  v_27 = (error-v_26);
  v_28 = (v_27/Logic__i_kd_wall);
  v_30 = (v_28+v_29);
  v_23 = (self->v_22+error);
  if (self->v_21) {
    error_sum = 0;
  } else {
    error_sum = v_23;
  };
  v_31 = (error_sum/Logic__i_ki_wall);
  raw_drive = (v_30+v_31);
  v_33 = (raw_drive<-110);
  if (v_33) {
    v_34 = -110;
  } else {
    v_34 = raw_drive;
  };
  v_32 = (raw_drive>Logic__max_drive_wall);
  if (v_32) {
    drive = 110;
  } else {
    drive = v_34;
  };
  _out->v_right = (Logic__pid_fwd_speed_wall+drive);
  _out->v_left = (Logic__pid_fwd_speed_wall-drive);
  self->v_25 = error;
  self->v_24 = false;
  self->v_22 = error_sum;
  self->v_21 = false;;
}

void Logic__obstacleavoider_reset(Logic__obstacleavoider_mem* self) {
  Logic__pidwallalign_reset(&self->pidwallalign);
  self->v_57 = true;
  self->v_53 = true;
  self->v_46 = true;
  self->v_40 = true;
  self->v_35 = true;
  self->pnr = false;
  self->ck = Logic__St_Reverse_1;
}

void Logic__obstacleavoider_step(int ir_d_left1, int ir_d_left2,
                                 int white_line, int penc_l, int penc_r,
                                 Logic__obstacleavoider_out* _out,
                                 Logic__obstacleavoider_mem* self) {
  Logic__pidwallalign_out Logic__pidwallalign_out_st;
  
  int r_2;
  int v_38;
  int v_36;
  int v;
  int v_44;
  int v_42;
  int v_41;
  int v_39;
  int v_49;
  int v_47;
  int v_45;
  int v_62;
  int v_61;
  int v_59;
  int v_58;
  int v_55;
  int v_54;
  int v_52;
  int v_51;
  int v_50;
  int nr_St_ExitState;
  Logic__st ns_St_ExitState;
  int penc_r_target_St_ExitState;
  int penc_l_target_St_ExitState;
  int timer_St_ExitState;
  int oas_done_St_ExitState;
  int v_right_St_ExitState;
  int v_left_St_ExitState;
  int nr_St_PIDWallFollower;
  Logic__st ns_St_PIDWallFollower;
  int penc_r_target_St_PIDWallFollower;
  int penc_l_target_St_PIDWallFollower;
  int timer_St_PIDWallFollower;
  int oas_done_St_PIDWallFollower;
  int v_right_St_PIDWallFollower;
  int v_left_St_PIDWallFollower;
  int nr_St_Delay_2;
  Logic__st ns_St_Delay_2;
  int penc_r_target_St_Delay_2;
  int penc_l_target_St_Delay_2;
  int timer_St_Delay_2;
  int oas_done_St_Delay_2;
  int v_right_St_Delay_2;
  int v_left_St_Delay_2;
  int nr_St_LeftTurn_1;
  Logic__st ns_St_LeftTurn_1;
  int penc_r_target_St_LeftTurn_1;
  int penc_l_target_St_LeftTurn_1;
  int timer_St_LeftTurn_1;
  int oas_done_St_LeftTurn_1;
  int v_right_St_LeftTurn_1;
  int v_left_St_LeftTurn_1;
  int nr_St_Delay_1;
  Logic__st ns_St_Delay_1;
  int penc_r_target_St_Delay_1;
  int penc_l_target_St_Delay_1;
  int timer_St_Delay_1;
  int oas_done_St_Delay_1;
  int v_right_St_Delay_1;
  int v_left_St_Delay_1;
  int nr_St_Reverse_1;
  Logic__st ns_St_Reverse_1;
  int penc_r_target_St_Reverse_1;
  int penc_l_target_St_Reverse_1;
  int timer_St_Reverse_1;
  int oas_done_St_Reverse_1;
  int v_right_St_Reverse_1;
  int v_left_St_Reverse_1;
  Logic__st ns;
  int r;
  int nr;
  int timer;
  int penc_l_target;
  int penc_r_target;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_Reverse_1:
      timer_St_Reverse_1 = self->timer_1;
      oas_done_St_Reverse_1 = false;
      v_59 = (penc_r+Logic__rev_count);
      if (self->v_57) {
        v_58 = true;
      } else {
        v_58 = r;
      };
      if (v_58) {
        penc_r_target_St_Reverse_1 = v_59;
      } else {
        penc_r_target_St_Reverse_1 = self->v_60;
      };
      v_55 = (penc_l+Logic__rev_count);
      if (self->v_53) {
        v_54 = true;
      } else {
        v_54 = r;
      };
      if (v_54) {
        penc_l_target_St_Reverse_1 = v_55;
      } else {
        penc_l_target_St_Reverse_1 = self->v_56;
      };
      _out->oas_done = oas_done_St_Reverse_1;
      timer = timer_St_Reverse_1;
      penc_l_target = penc_l_target_St_Reverse_1;
      v_61 = (penc_l<penc_l_target);
      if (v_61) {
        v_left_St_Reverse_1 = -80;
      } else {
        v_left_St_Reverse_1 = 0;
      };
      v_50 = (penc_l>=penc_l_target);
      _out->v_left = v_left_St_Reverse_1;
      penc_r_target = penc_r_target_St_Reverse_1;
      v_62 = (penc_r<penc_r_target);
      if (v_62) {
        v_right_St_Reverse_1 = -80;
      } else {
        v_right_St_Reverse_1 = 0;
      };
      v_51 = (penc_r>=penc_r_target);
      v_52 = (v_50&&v_51);
      if (v_52) {
        nr_St_Reverse_1 = true;
        ns_St_Reverse_1 = Logic__St_Delay_1;
      } else {
        nr_St_Reverse_1 = false;
        ns_St_Reverse_1 = Logic__St_Reverse_1;
      };
      _out->v_right = v_right_St_Reverse_1;
      ns = ns_St_Reverse_1;
      nr = nr_St_Reverse_1;
      self->v_60 = penc_r_target;
      self->v_57 = false;
      self->v_56 = penc_l_target;
      self->v_53 = false;
      break;
    case Logic__St_Delay_1:
      penc_r_target_St_Delay_1 = self->penc_r_target_1;
      penc_l_target_St_Delay_1 = self->penc_l_target_1;
      oas_done_St_Delay_1 = false;
      v_49 = (self->v_48-1);
      if (self->v_46) {
        v_47 = true;
      } else {
        v_47 = r;
      };
      if (v_47) {
        timer_St_Delay_1 = 100;
      } else {
        timer_St_Delay_1 = v_49;
      };
      v_right_St_Delay_1 = 0;
      v_left_St_Delay_1 = 0;
      _out->oas_done = oas_done_St_Delay_1;
      timer = timer_St_Delay_1;
      v_45 = (timer<=0);
      if (v_45) {
        nr_St_Delay_1 = true;
        ns_St_Delay_1 = Logic__St_LeftTurn_1;
      } else {
        nr_St_Delay_1 = false;
        ns_St_Delay_1 = Logic__St_Delay_1;
      };
      penc_l_target = penc_l_target_St_Delay_1;
      _out->v_left = v_left_St_Delay_1;
      penc_r_target = penc_r_target_St_Delay_1;
      _out->v_right = v_right_St_Delay_1;
      ns = ns_St_Delay_1;
      nr = nr_St_Delay_1;
      self->v_48 = timer;
      self->v_46 = false;
      break;
    case Logic__St_LeftTurn_1:
      penc_l_target_St_LeftTurn_1 = self->penc_l_target_1;
      timer_St_LeftTurn_1 = self->timer_1;
      oas_done_St_LeftTurn_1 = false;
      v_left_St_LeftTurn_1 = 0;
      v_42 = (penc_r+Logic__init_left_turn_count);
      if (self->v_40) {
        v_41 = true;
      } else {
        v_41 = r;
      };
      if (v_41) {
        penc_r_target_St_LeftTurn_1 = v_42;
      } else {
        penc_r_target_St_LeftTurn_1 = self->v_43;
      };
      _out->oas_done = oas_done_St_LeftTurn_1;
      timer = timer_St_LeftTurn_1;
      penc_l_target = penc_l_target_St_LeftTurn_1;
      _out->v_left = v_left_St_LeftTurn_1;
      penc_r_target = penc_r_target_St_LeftTurn_1;
      v_44 = (penc_r<penc_r_target);
      if (v_44) {
        v_right_St_LeftTurn_1 = 90;
      } else {
        v_right_St_LeftTurn_1 = 0;
      };
      v_39 = (penc_r>=penc_r_target);
      if (v_39) {
        nr_St_LeftTurn_1 = true;
        ns_St_LeftTurn_1 = Logic__St_Delay_2;
      } else {
        nr_St_LeftTurn_1 = false;
        ns_St_LeftTurn_1 = Logic__St_LeftTurn_1;
      };
      _out->v_right = v_right_St_LeftTurn_1;
      ns = ns_St_LeftTurn_1;
      nr = nr_St_LeftTurn_1;
      self->v_43 = penc_r_target;
      self->v_40 = false;
      break;
    case Logic__St_Delay_2:
      penc_r_target_St_Delay_2 = self->penc_r_target_1;
      penc_l_target_St_Delay_2 = self->penc_l_target_1;
      oas_done_St_Delay_2 = false;
      v_38 = (self->v_37-1);
      if (self->v_35) {
        v_36 = true;
      } else {
        v_36 = r;
      };
      if (v_36) {
        timer_St_Delay_2 = 100;
      } else {
        timer_St_Delay_2 = v_38;
      };
      v_right_St_Delay_2 = 0;
      v_left_St_Delay_2 = 0;
      _out->oas_done = oas_done_St_Delay_2;
      timer = timer_St_Delay_2;
      v = (timer<=0);
      if (v) {
        nr_St_Delay_2 = true;
        ns_St_Delay_2 = Logic__St_PIDWallFollower;
      } else {
        nr_St_Delay_2 = false;
        ns_St_Delay_2 = Logic__St_Delay_2;
      };
      penc_l_target = penc_l_target_St_Delay_2;
      _out->v_left = v_left_St_Delay_2;
      penc_r_target = penc_r_target_St_Delay_2;
      _out->v_right = v_right_St_Delay_2;
      ns = ns_St_Delay_2;
      nr = nr_St_Delay_2;
      self->v_37 = timer;
      self->v_35 = false;
      break;
    case Logic__St_PIDWallFollower:
      penc_r_target_St_PIDWallFollower = self->penc_r_target_1;
      penc_l_target_St_PIDWallFollower = self->penc_l_target_1;
      timer_St_PIDWallFollower = self->timer_1;
      oas_done_St_PIDWallFollower = false;
      if (white_line) {
        nr_St_PIDWallFollower = true;
        ns_St_PIDWallFollower = Logic__St_ExitState;
      } else {
        nr_St_PIDWallFollower = false;
        ns_St_PIDWallFollower = Logic__St_PIDWallFollower;
      };
      r_2 = r;
      if (r_2) {
        Logic__pidwallalign_reset(&self->pidwallalign);
      };
      Logic__pidwallalign_step(ir_d_left1, ir_d_left2,
                               &Logic__pidwallalign_out_st,
                               &self->pidwallalign);
      v_left_St_PIDWallFollower = Logic__pidwallalign_out_st.v_left;
      v_right_St_PIDWallFollower = Logic__pidwallalign_out_st.v_right;
      _out->oas_done = oas_done_St_PIDWallFollower;
      timer = timer_St_PIDWallFollower;
      penc_l_target = penc_l_target_St_PIDWallFollower;
      _out->v_left = v_left_St_PIDWallFollower;
      penc_r_target = penc_r_target_St_PIDWallFollower;
      _out->v_right = v_right_St_PIDWallFollower;
      ns = ns_St_PIDWallFollower;
      nr = nr_St_PIDWallFollower;
      break;
    case Logic__St_ExitState:
      penc_r_target_St_ExitState = self->penc_r_target_1;
      penc_l_target_St_ExitState = self->penc_l_target_1;
      timer_St_ExitState = self->timer_1;
      oas_done_St_ExitState = true;
      v_right_St_ExitState = 0;
      v_left_St_ExitState = 0;
      nr_St_ExitState = false;
      ns_St_ExitState = Logic__St_ExitState;
      _out->oas_done = oas_done_St_ExitState;
      timer = timer_St_ExitState;
      penc_l_target = penc_l_target_St_ExitState;
      _out->v_left = v_left_St_ExitState;
      penc_r_target = penc_r_target_St_ExitState;
      _out->v_right = v_right_St_ExitState;
      ns = ns_St_ExitState;
      nr = nr_St_ExitState;
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

void Logic__finallogic_reset(Logic__finallogic_mem* self) {
  Logic__pidline_reset(&self->pidline);
  Logic__obstacleavoider_reset(&self->obstacleavoider);
  self->pnr_1 = false;
  self->v_71 = false;
  self->v_70 = Logic__St_1_LineFollowing;
  self->ck = Logic__St_2_StartState;
}

void Logic__finallogic_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                            int penc_l, int penc_r, int ir_d_front,
                            int ir_d_left1, int ir_d_left2,
                            Logic__finallogic_out* _out,
                            Logic__finallogic_mem* self) {
  Logic__pidline_out Logic__pidline_out_st;
  Logic__obstacleavoider_out Logic__obstacleavoider_out_st;
  
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v;
  int r_3;
  int oas_done;
  int white_line;
  int r_4;
  int nr_St_1_ObstacleAvoider;
  Logic__st_1 ns_St_1_ObstacleAvoider;
  int current_state_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
  int v_right_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
  int v_left_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
  int nr_St_1_LineFollowing;
  Logic__st_1 ns_St_1_LineFollowing;
  int current_state_St_2_WhiteLineFollower_St_1_LineFollowing;
  int v_right_St_2_WhiteLineFollower_St_1_LineFollowing;
  int v_left_St_2_WhiteLineFollower_St_1_LineFollowing;
  Logic__st_1 ck_1;
  Logic__st_1 ns;
  int r;
  int nr;
  int pnr;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int nr_1_St_2_WhiteLineFollower;
  Logic__st_2 ns_1_St_2_WhiteLineFollower;
  int current_state_St_2_WhiteLineFollower;
  int v_right_St_2_WhiteLineFollower;
  int v_left_St_2_WhiteLineFollower;
  int nr_1_St_2_StartState;
  Logic__st_2 ns_1_St_2_StartState;
  int current_state_St_2_StartState;
  int v_right_St_2_StartState;
  int v_left_St_2_StartState;
  Logic__st_2 ns_1;
  int r_1;
  int nr_1;
  int current_state;
  r_1 = self->pnr_1;
  switch (self->ck) {
    case Logic__St_2_StartState:
      current_state_St_2_StartState = 1;
      v_right_St_2_StartState = 100;
      v_left_St_2_StartState = 100;
      v_79 = (cfl<Logic__white_threshold);
      v_77 = (ccl<Logic__white_threshold);
      v_75 = (ccc<Logic__white_threshold);
      v_73 = (ccr<Logic__white_threshold);
      v_72 = (cfr<Logic__white_threshold);
      v_74 = (v_72||v_73);
      v_76 = (v_74||v_75);
      v_78 = (v_76||v_77);
      v_80 = (v_78||v_79);
      if (v_80) {
        nr_1_St_2_StartState = true;
        ns_1_St_2_StartState = Logic__St_2_WhiteLineFollower;
      } else {
        nr_1_St_2_StartState = false;
        ns_1_St_2_StartState = Logic__St_2_StartState;
      };
      ns_1 = ns_1_St_2_StartState;
      nr_1 = nr_1_St_2_StartState;
      _out->v_left = v_left_St_2_StartState;
      _out->v_right = v_right_St_2_StartState;
      current_state = current_state_St_2_StartState;
      break;
    case Logic__St_2_WhiteLineFollower:
      if (r_1) {
        pnr = false;
      } else {
        pnr = self->v_71;
      };
      r = pnr;
      if (r_1) {
        ck_1 = Logic__St_1_LineFollowing;
      } else {
        ck_1 = self->v_70;
      };
      nr_1_St_2_WhiteLineFollower = false;
      ns_1_St_2_WhiteLineFollower = Logic__St_2_WhiteLineFollower;
      ns_1 = ns_1_St_2_WhiteLineFollower;
      nr_1 = nr_1_St_2_WhiteLineFollower;
      switch (ck_1) {
        case Logic__St_1_LineFollowing:
          current_state_St_2_WhiteLineFollower_St_1_LineFollowing = 2;
          nr_St_1_LineFollowing = false;
          ns_St_1_LineFollowing = Logic__St_1_LineFollowing;
          r_4 = (r_1||r);
          if (r_4) {
            Logic__pidline_reset(&self->pidline);
          };
          Logic__pidline_step(cfr, ccr, ccc, ccl, cfl,
                              &Logic__pidline_out_st, &self->pidline);
          v_left_St_2_WhiteLineFollower_St_1_LineFollowing = Logic__pidline_out_st.v_left;
          v_right_St_2_WhiteLineFollower_St_1_LineFollowing = Logic__pidline_out_st.v_right;
          v_left_St_2_WhiteLineFollower = v_left_St_2_WhiteLineFollower_St_1_LineFollowing;
          v_right_St_2_WhiteLineFollower = v_right_St_2_WhiteLineFollower_St_1_LineFollowing;
          current_state_St_2_WhiteLineFollower = current_state_St_2_WhiteLineFollower_St_1_LineFollowing;
          ns = ns_St_1_LineFollowing;
          nr = nr_St_1_LineFollowing;
          break;
        case Logic__St_1_ObstacleAvoider:
          v_69 = (cfl>=Logic__white_threshold);
          v_67 = (ccl>=Logic__white_threshold);
          v_65 = (ccc>=Logic__white_threshold);
          v_63 = (ccr>=Logic__white_threshold);
          v = (cfr>=Logic__white_threshold);
          v_64 = (v||v_63);
          v_66 = (v_64||v_65);
          v_68 = (v_66||v_67);
          white_line = (v_68||v_69);
          current_state_St_2_WhiteLineFollower_St_1_ObstacleAvoider = 3;
          r_3 = (r_1||r);
          if (r_3) {
            Logic__obstacleavoider_reset(&self->obstacleavoider);
          };
          Logic__obstacleavoider_step(ir_d_left1, ir_d_left2, white_line,
                                      penc_l, penc_r,
                                      &Logic__obstacleavoider_out_st,
                                      &self->obstacleavoider);
          v_left_St_2_WhiteLineFollower_St_1_ObstacleAvoider = Logic__obstacleavoider_out_st.v_left;
          v_right_St_2_WhiteLineFollower_St_1_ObstacleAvoider = Logic__obstacleavoider_out_st.v_right;
          oas_done = Logic__obstacleavoider_out_st.oas_done;
          if (oas_done) {
            nr_St_1_ObstacleAvoider = true;
            ns_St_1_ObstacleAvoider = Logic__St_1_LineFollowing;
          } else {
            nr_St_1_ObstacleAvoider = false;
            ns_St_1_ObstacleAvoider = Logic__St_1_ObstacleAvoider;
          };
          v_left_St_2_WhiteLineFollower = v_left_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
          v_right_St_2_WhiteLineFollower = v_right_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
          current_state_St_2_WhiteLineFollower = current_state_St_2_WhiteLineFollower_St_1_ObstacleAvoider;
          ns = ns_St_1_ObstacleAvoider;
          nr = nr_St_1_ObstacleAvoider;
          break;
        default:
          break;
      };
      _out->v_left = v_left_St_2_WhiteLineFollower;
      _out->v_right = v_right_St_2_WhiteLineFollower;
      current_state = current_state_St_2_WhiteLineFollower;
      break;
    default:
      break;
  };
  _out->cs = current_state;
  self->current_state_1 = current_state;
  self->pnr_1 = nr_1;
  switch (self->ck) {
    case Logic__St_2_WhiteLineFollower:
      self->v_71 = nr;
      self->v_70 = ns;
      break;
    default:
      break;
  };
  self->ck = ns_1;;
}


/* --- Generated the 26/3/2023 at 19:9 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__pidline_reset(Logic__pidline_mem* self) {
  self->pnr = false;
  self->v_19 = true;
  self->v_15 = true;
  self->ck = Logic__St_Start;
}

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         Logic__pidline_out* _out, Logic__pidline_mem* self) {
  
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_20;
  int v_18;
  int v_16;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
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
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int nr_St_ReachedDest;
  Logic__st ns_St_ReachedDest;
  int current_state_St_ReachedDest;
  int out_drive_St_ReachedDest;
  int v_right_St_ReachedDest;
  int v_left_St_ReachedDest;
  int dir_St_ReachedDest;
  int nr_St_PIDFollower;
  Logic__st ns_St_PIDFollower;
  int current_state_St_PIDFollower;
  int out_drive_St_PIDFollower;
  int v_right_St_PIDFollower;
  int v_left_St_PIDFollower;
  int dir_St_PIDFollower;
  int nr_St_Start;
  Logic__st ns_St_Start;
  int current_state_St_Start;
  int out_drive_St_Start;
  int v_right_St_Start;
  int v_left_St_Start;
  int dir_St_Start;
  Logic__st ns;
  int r;
  int nr;
  int current_state;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_Start:
      out_drive_St_Start = 0;
      current_state_St_Start = 1;
      dir_St_Start = 6;
      v_right_St_Start = 0;
      v_left_St_Start = 0;
      v_38 = (cfl>Logic__white_threshold);
      v_36 = (ccl<Logic__white_threshold);
      v_34 = (ccc<Logic__white_threshold);
      v_32 = (ccr<Logic__white_threshold);
      v_31 = (cfr<Logic__white_threshold);
      v_33 = (v_31||v_32);
      v_35 = (v_33||v_34);
      v_37 = (v_35||v_36);
      v_39 = (v_37||v_38);
      if (v_39) {
        nr_St_Start = true;
        ns_St_Start = Logic__St_PIDFollower;
      } else {
        nr_St_Start = false;
        ns_St_Start = Logic__St_Start;
      };
      _out->dir = dir_St_Start;
      _out->v_left = v_left_St_Start;
      _out->v_right = v_right_St_Start;
      _out->out_drive = out_drive_St_Start;
      current_state = current_state_St_Start;
      ns = ns_St_Start;
      nr = nr_St_Start;
      break;
    case Logic__St_PIDFollower:
      dir_St_PIDFollower = 0;
      current_state_St_PIDFollower = 2;
      if (self->v_19) {
        v_20 = true;
      } else {
        v_20 = r;
      };
      if (v_20) {
        v_22 = 0;
      } else {
        v_22 = self->v_21;
      };
      if (self->v_15) {
        v_16 = true;
      } else {
        v_16 = r;
      };
      v_14 = (cfl/Logic__w_far);
      v_12 = (ccl/Logic__w_cent);
      v_10 = (ccr/Logic__w_cent);
      v_9 = (cfr/Logic__w_far);
      v_11 = (v_9+v_10);
      v_13 = (v_11-v_12);
      error = (v_13-v_14);
      v_25 = (error/Logic__i_kp);
      v_23 = (error-v_22);
      v_24 = (v_23/Logic__i_kd);
      v_26 = (v_24+v_25);
      v_18 = (self->v_17+error);
      if (v_16) {
        error_sum = 0;
      } else {
        error_sum = v_18;
      };
      v_27 = (error_sum/Logic__i_ki);
      raw_drive = (v_26+v_27);
      v_29 = (raw_drive<-110);
      if (v_29) {
        v_30 = -110;
      } else {
        v_30 = raw_drive;
      };
      v_28 = (raw_drive>Logic__max_drive);
      if (v_28) {
        drive = 110;
      } else {
        drive = v_30;
      };
      out_drive_St_PIDFollower = drive;
      v_right_St_PIDFollower = (Logic__pid_fwd_speed+drive);
      v_left_St_PIDFollower = (Logic__pid_fwd_speed-drive);
      v_7 = (cfl>Logic__white_threshold);
      v_5 = (ccl>Logic__white_threshold);
      v_3 = (ccc>Logic__white_threshold);
      v_1 = (ccr>Logic__white_threshold);
      v = (cfr>Logic__white_threshold);
      v_2 = (v&&v_1);
      v_4 = (v_2&&v_3);
      v_6 = (v_4&&v_5);
      v_8 = (v_6&&v_7);
      if (v_8) {
        nr_St_PIDFollower = true;
        ns_St_PIDFollower = Logic__St_ReachedDest;
      } else {
        nr_St_PIDFollower = false;
        ns_St_PIDFollower = Logic__St_PIDFollower;
      };
      _out->dir = dir_St_PIDFollower;
      _out->v_left = v_left_St_PIDFollower;
      _out->v_right = v_right_St_PIDFollower;
      _out->out_drive = out_drive_St_PIDFollower;
      current_state = current_state_St_PIDFollower;
      ns = ns_St_PIDFollower;
      nr = nr_St_PIDFollower;
      break;
    case Logic__St_ReachedDest:
      out_drive_St_ReachedDest = 0;
      current_state_St_ReachedDest = 3;
      dir_St_ReachedDest = 6;
      v_right_St_ReachedDest = 0;
      v_left_St_ReachedDest = 0;
      nr_St_ReachedDest = false;
      ns_St_ReachedDest = Logic__St_ReachedDest;
      _out->dir = dir_St_ReachedDest;
      _out->v_left = v_left_St_ReachedDest;
      _out->v_right = v_right_St_ReachedDest;
      _out->out_drive = out_drive_St_ReachedDest;
      current_state = current_state_St_ReachedDest;
      ns = ns_St_ReachedDest;
      nr = nr_St_ReachedDest;
      break;
    default:
      break;
  };
  _out->cs = current_state;
  self->current_state_1 = current_state;
  self->pnr = nr;
  switch (self->ck) {
    case Logic__St_PIDFollower:
      self->v_21 = error;
      self->v_19 = false;
      self->v_17 = error_sum;
      self->v_15 = false;
      break;
    default:
      break;
  };
  self->ck = ns;;
}


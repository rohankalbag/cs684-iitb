/* --- Generated the 25/3/2023 at 2:31 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__pidline_reset(Logic__pidline_mem* self) {
  self->pnr = false;
  self->v_10 = true;
  self->v_6 = true;
  self->ck = Logic__St_PIDFollower;
}

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         Logic__pidline_out* _out, Logic__pidline_mem* self) {
  
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_11;
  int v_9;
  int v_7;
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
  int nr_St_PIDFollower;
  Logic__st ns_St_PIDFollower;
  int current_state_St_PIDFollower;
  int out_drive_St_PIDFollower;
  int v_right_St_PIDFollower;
  int v_left_St_PIDFollower;
  int dir_St_PIDFollower;
  Logic__st ns;
  int r;
  int nr;
  int current_state;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_PIDFollower:
      dir_St_PIDFollower = 0;
      current_state_St_PIDFollower = 2;
      if (self->v_10) {
        v_11 = true;
      } else {
        v_11 = r;
      };
      if (v_11) {
        v_13 = 0;
      } else {
        v_13 = self->v_12;
      };
      if (self->v_6) {
        v_7 = true;
      } else {
        v_7 = r;
      };
      v_5 = (cfl/Logic__w_far);
      v_3 = (ccl/Logic__w_cent);
      v_1 = (ccr/Logic__w_cent);
      v = (cfr/Logic__w_far);
      v_2 = (v+v_1);
      v_4 = (v_2-v_3);
      error = (v_4-v_5);
      v_16 = (error/Logic__i_kp);
      v_14 = (error-v_13);
      v_15 = (v_14/Logic__i_kd);
      v_17 = (v_15+v_16);
      v_9 = (self->v_8+error);
      if (v_7) {
        error_sum = 0;
      } else {
        error_sum = v_9;
      };
      v_18 = (error_sum/Logic__i_ki);
      raw_drive = (v_17+v_18);
      v_20 = (raw_drive<-110);
      if (v_20) {
        v_21 = -110;
      } else {
        v_21 = raw_drive;
      };
      v_19 = (raw_drive>Logic__max_drive);
      if (v_19) {
        drive = 110;
      } else {
        drive = v_21;
      };
      out_drive_St_PIDFollower = drive;
      v_right_St_PIDFollower = (Logic__pid_fwd_speed+drive);
      v_left_St_PIDFollower = (Logic__pid_fwd_speed-drive);
      nr_St_PIDFollower = false;
      ns_St_PIDFollower = Logic__St_PIDFollower;
      _out->dir = dir_St_PIDFollower;
      _out->v_left = v_left_St_PIDFollower;
      _out->v_right = v_right_St_PIDFollower;
      _out->out_drive = out_drive_St_PIDFollower;
      current_state = current_state_St_PIDFollower;
      ns = ns_St_PIDFollower;
      nr = nr_St_PIDFollower;
      break;
    default:
      break;
  };
  _out->cs = current_state;
  self->current_state_1 = current_state;
  self->pnr = nr;
  switch (self->ck) {
    case Logic__St_PIDFollower:
      self->v_12 = error;
      self->v_10 = false;
      self->v_8 = error_sum;
      self->v_6 = false;
      break;
    default:
      break;
  };
  self->ck = ns;;
}


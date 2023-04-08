/* --- Generated the 9/4/2023 at 1:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic.h"

void Logic__obstavoider_reset(Logic__obstavoider_mem* self) {
  self->pnr = false;
  self->v_6 = true;
  self->v_2 = true;
  self->ck = Logic__St_PIDFollower;
}

void Logic__obstavoider_step(int ir_d_front, int ir_d_left1, int ir_d_left2,
                             int penc_l, int penc_r,
                             Logic__obstavoider_out* _out,
                             Logic__obstavoider_mem* self) {
  
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_7;
  int v_5;
  int v_3;
  int v_1;
  int v;
  int error_sum;
  int raw_drive;
  int drive;
  int error;
  int nr_St_PIDFollower;
  Logic__st ns_St_PIDFollower;
  int current_state_St_PIDFollower;
  int v_right_St_PIDFollower;
  int v_left_St_PIDFollower;
  Logic__st ns;
  int r;
  int nr;
  int current_state;
  r = self->pnr;
  switch (self->ck) {
    case Logic__St_PIDFollower:
      if (self->v_6) {
        v_7 = true;
      } else {
        v_7 = r;
      };
      if (v_7) {
        v_9 = 0;
      } else {
        v_9 = self->v_8;
      };
      if (self->v_2) {
        v_3 = true;
      } else {
        v_3 = r;
      };
      if (ir_d_left2) {
        v_1 = -40;
        v = 15;
      } else {
        v_1 = -15;
        v = 30;
      };
      if (ir_d_left1) {
        error = v;
      } else {
        error = v_1;
      };
      current_state_St_PIDFollower = error;
      v_12 = (error/Logic__i_kp);
      v_10 = (error-v_9);
      v_11 = (v_10/Logic__i_kd);
      v_13 = (v_11+v_12);
      v_5 = (self->v_4+error);
      if (v_3) {
        error_sum = 0;
      } else {
        error_sum = v_5;
      };
      v_14 = (error_sum/Logic__i_ki);
      raw_drive = (v_13+v_14);
      v_16 = (raw_drive<-110);
      if (v_16) {
        v_17 = -110;
      } else {
        v_17 = raw_drive;
      };
      v_15 = (raw_drive>Logic__max_drive);
      if (v_15) {
        drive = 110;
      } else {
        drive = v_17;
      };
      v_right_St_PIDFollower = (Logic__pid_fwd_speed+drive);
      v_left_St_PIDFollower = (Logic__pid_fwd_speed-drive);
      nr_St_PIDFollower = false;
      ns_St_PIDFollower = Logic__St_PIDFollower;
      _out->v_left = v_left_St_PIDFollower;
      _out->v_right = v_right_St_PIDFollower;
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
      self->v_8 = error;
      self->v_6 = false;
      self->v_4 = error_sum;
      self->v_2 = false;
      break;
    default:
      break;
  };
  self->ck = ns;;
}


/* --- Generated the 1/3/2023 at 16:34 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s parkingnode -hepts valetparker.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "valetparker.h"

void Valetparker__parkingnode_reset(Valetparker__parkingnode_mem* self) {
  self->v_14 = true;
  self->v_2 = true;
  self->timer_1 = 0;
  self->oas_busy_1 = false;
  self->pnr_1 = false;
  self->v_35 = true;
  self->v_31 = true;
  self->v_23 = false;
  self->v_22 = Valetparker__St_MoveBack;
  self->ck = Valetparker__St_1_StartState;
}

void Valetparker__parkingnode_step(int cfl, int ccl, int ccc, int ccr,
                                   int cfr, int ifl, int icl, int icc,
                                   int icr, int ifr,
                                   Valetparker__parkingnode_out* _out,
                                   Valetparker__parkingnode_mem* self) {
  
  int v_9;
  int v_8;
  int v_6;
  int v_4;
  int v_3;
  int v_1;
  int v_10;
  int turn_right;
  int v_11;
  int v_12;
  int v_21;
  int v_20;
  int v_18;
  int v_16;
  int v_15;
  int v_13;
  int nr_St_BotIsOnLine;
  Valetparker__st ns_St_BotIsOnLine;
  int currst8_St_1_OAS_St_BotIsOnLine;
  int timer_St_1_OAS_St_BotIsOnLine;
  int oas_busy_St_1_OAS_St_BotIsOnLine;
  int vr_St_1_OAS_St_BotIsOnLine;
  int vl_St_1_OAS_St_BotIsOnLine;
  int dir_St_1_OAS_St_BotIsOnLine;
  int nr_St_MoveRightTillWhiteLine;
  Valetparker__st ns_St_MoveRightTillWhiteLine;
  int currst8_St_1_OAS_St_MoveRightTillWhiteLine;
  int timer_St_1_OAS_St_MoveRightTillWhiteLine;
  int oas_busy_St_1_OAS_St_MoveRightTillWhiteLine;
  int vr_St_1_OAS_St_MoveRightTillWhiteLine;
  int vl_St_1_OAS_St_MoveRightTillWhiteLine;
  int dir_St_1_OAS_St_MoveRightTillWhiteLine;
  int nr_St_UnalignMoveBack;
  Valetparker__st ns_St_UnalignMoveBack;
  int currst8_St_1_OAS_St_UnalignMoveBack;
  int timer_St_1_OAS_St_UnalignMoveBack;
  int oas_busy_St_1_OAS_St_UnalignMoveBack;
  int vr_St_1_OAS_St_UnalignMoveBack;
  int vl_St_1_OAS_St_UnalignMoveBack;
  int dir_St_1_OAS_St_UnalignMoveBack;
  int nr_St_MaintainWallAlign;
  Valetparker__st ns_St_MaintainWallAlign;
  int currst8_St_1_OAS_St_MaintainWallAlign;
  int timer_St_1_OAS_St_MaintainWallAlign;
  int oas_busy_St_1_OAS_St_MaintainWallAlign;
  int vr_St_1_OAS_St_MaintainWallAlign;
  int vl_St_1_OAS_St_MaintainWallAlign;
  int dir_St_1_OAS_St_MaintainWallAlign;
  int nr_St_SecondImmediateRightTurn;
  Valetparker__st ns_St_SecondImmediateRightTurn;
  int currst8_St_1_OAS_St_SecondImmediateRightTurn;
  int timer_St_1_OAS_St_SecondImmediateRightTurn;
  int oas_busy_St_1_OAS_St_SecondImmediateRightTurn;
  int vr_St_1_OAS_St_SecondImmediateRightTurn;
  int vl_St_1_OAS_St_SecondImmediateRightTurn;
  int dir_St_1_OAS_St_SecondImmediateRightTurn;
  int nr_St_FirstImmediateRightTurn;
  Valetparker__st ns_St_FirstImmediateRightTurn;
  int currst8_St_1_OAS_St_FirstImmediateRightTurn;
  int timer_St_1_OAS_St_FirstImmediateRightTurn;
  int oas_busy_St_1_OAS_St_FirstImmediateRightTurn;
  int vr_St_1_OAS_St_FirstImmediateRightTurn;
  int vl_St_1_OAS_St_FirstImmediateRightTurn;
  int dir_St_1_OAS_St_FirstImmediateRightTurn;
  int nr_St_MoveBack;
  Valetparker__st ns_St_MoveBack;
  int currst8_St_1_OAS_St_MoveBack;
  int timer_St_1_OAS_St_MoveBack;
  int oas_busy_St_1_OAS_St_MoveBack;
  int vr_St_1_OAS_St_MoveBack;
  int vl_St_1_OAS_St_MoveBack;
  int dir_St_1_OAS_St_MoveBack;
  Valetparker__st ck_1;
  int v;
  Valetparker__st ns;
  int r;
  int nr;
  int pnr;
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
  int v_38;
  int v_36;
  int v_34;
  int v_32;
  int v_30;
  Valetparker__st_1 v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int error;
  int error_integral;
  int error_derivative;
  int tpid;
  int pid_value;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int nr_1_St_1_OAS;
  Valetparker__st_1 ns_1_St_1_OAS;
  int currst8_St_1_OAS;
  int timer_St_1_OAS;
  int oas_busy_St_1_OAS;
  int vr_St_1_OAS;
  int vl_St_1_OAS;
  int dir_St_1_OAS;
  int nr_1_St_1_StopState;
  Valetparker__st_1 ns_1_St_1_StopState;
  int currst8_St_1_StopState;
  int timer_St_1_StopState;
  int oas_busy_St_1_StopState;
  int vr_St_1_StopState;
  int vl_St_1_StopState;
  int dir_St_1_StopState;
  int nr_1_St_1_PID;
  Valetparker__st_1 ns_1_St_1_PID;
  int currst8_St_1_PID;
  int timer_St_1_PID;
  int oas_busy_St_1_PID;
  int vr_St_1_PID;
  int vl_St_1_PID;
  int dir_St_1_PID;
  int nr_1_St_1_StartState;
  Valetparker__st_1 ns_1_St_1_StartState;
  int currst8_St_1_StartState;
  int timer_St_1_StartState;
  int oas_busy_St_1_StartState;
  int vr_St_1_StartState;
  int vl_St_1_StartState;
  int dir_St_1_StartState;
  Valetparker__st_1 ns_1;
  int r_1;
  int nr_1;
  int oas_busy;
  int tfl;
  int tcl;
  int tcc;
  int tcr;
  int tfr;
  int timer;
  int currst8;
  r_1 = self->pnr_1;
  tfr = (cfr<Valetparker__white_line_threshold);
  tcr = (ccr<Valetparker__white_line_threshold);
  tcc = (ccc<Valetparker__white_line_threshold);
  tcl = (ccl<Valetparker__white_line_threshold);
  tfl = (cfl<Valetparker__white_line_threshold);
  switch (self->ck) {
    case Valetparker__St_1_StartState:
      timer_St_1_StartState = self->timer_1;
      oas_busy_St_1_StartState = false;
      dir_St_1_StartState = true;
      vr_St_1_StartState = 100;
      vl_St_1_StartState = 100;
      currst8_St_1_StartState = 0;
      v_50 = (tfl&&tcl);
      v_51 = (v_50&&tcc);
      v_52 = (v_51&&tcr);
      v_53 = (v_52&&tfr);
      v_54 = !(v_53);
      if (v_54) {
        nr_1_St_1_StartState = true;
        ns_1_St_1_StartState = Valetparker__St_1_PID;
      } else {
        nr_1_St_1_StartState = false;
        ns_1_St_1_StartState = Valetparker__St_1_StartState;
      };
      _out->dir = dir_St_1_StartState;
      _out->vl = vl_St_1_StartState;
      _out->vr = vr_St_1_StartState;
      oas_busy = oas_busy_St_1_StartState;
      timer = timer_St_1_StartState;
      currst8 = currst8_St_1_StartState;
      ns_1 = ns_1_St_1_StartState;
      nr_1 = nr_1_St_1_StartState;
      break;
    case Valetparker__St_1_PID:
      timer_St_1_PID = self->timer_1;
      oas_busy_St_1_PID = false;
      dir_St_1_PID = true;
      if (self->v_35) {
        v_36 = true;
      } else {
        v_36 = r_1;
      };
      if (self->v_31) {
        v_32 = true;
      } else {
        v_32 = r_1;
      };
      error = (ccr-ccl);
      v_39 = (error/Valetparker__kp_inv);
      v_38 = (error-self->v_37);
      if (v_36) {
        error_derivative = 0;
      } else {
        error_derivative = v_38;
      };
      v_40 = (error_derivative/Valetparker__kd_inv);
      v_41 = (v_39+v_40);
      v_34 = (self->v_33+error);
      if (v_32) {
        error_integral = 0;
      } else {
        error_integral = v_34;
      };
      v_42 = (error_integral/Valetparker__ki_inv);
      tpid = (v_41+v_42);
      v_44 = (tpid>50);
      if (v_44) {
        v_45 = 50;
      } else {
        v_45 = tpid;
      };
      v_43 = (tpid<-50);
      if (v_43) {
        pid_value = -50;
      } else {
        pid_value = v_45;
      };
      v_49 = (50+pid_value);
      v_48 = (pid_value==0);
      if (v_48) {
        vr_St_1_PID = 100;
      } else {
        vr_St_1_PID = v_49;
      };
      v_47 = (50-pid_value);
      v_46 = (pid_value==0);
      if (v_46) {
        vl_St_1_PID = 100;
      } else {
        vl_St_1_PID = v_47;
      };
      currst8_St_1_PID = 1;
      v_28 = (icc<Valetparker__ir_obstacle_threshold);
      if (v_28) {
        v_30 = true;
        v_29 = Valetparker__St_1_OAS;
      } else {
        v_30 = false;
        v_29 = Valetparker__St_1_PID;
      };
      v_24 = (tfl&&tcl);
      v_25 = (v_24&&tcc);
      v_26 = (v_25&&tcr);
      v_27 = (v_26&&tfr);
      if (v_27) {
        nr_1_St_1_PID = true;
        ns_1_St_1_PID = Valetparker__St_1_StopState;
      } else {
        nr_1_St_1_PID = v_30;
        ns_1_St_1_PID = v_29;
      };
      _out->dir = dir_St_1_PID;
      _out->vl = vl_St_1_PID;
      _out->vr = vr_St_1_PID;
      oas_busy = oas_busy_St_1_PID;
      timer = timer_St_1_PID;
      currst8 = currst8_St_1_PID;
      ns_1 = ns_1_St_1_PID;
      nr_1 = nr_1_St_1_PID;
      break;
    case Valetparker__St_1_StopState:
      timer_St_1_StopState = self->timer_1;
      oas_busy_St_1_StopState = false;
      vr_St_1_StopState = 0;
      vl_St_1_StopState = 0;
      dir_St_1_StopState = false;
      currst8_St_1_StopState = 2;
      if (false) {
        nr_1_St_1_StopState = true;
      } else {
        nr_1_St_1_StopState = false;
      };
      if (false) {
        ns_1_St_1_StopState = Valetparker__St_1_StartState;
      } else {
        ns_1_St_1_StopState = Valetparker__St_1_StopState;
      };
      _out->dir = dir_St_1_StopState;
      _out->vl = vl_St_1_StopState;
      _out->vr = vr_St_1_StopState;
      oas_busy = oas_busy_St_1_StopState;
      timer = timer_St_1_StopState;
      currst8 = currst8_St_1_StopState;
      ns_1 = ns_1_St_1_StopState;
      nr_1 = nr_1_St_1_StopState;
      break;
    case Valetparker__St_1_OAS:
      if (r_1) {
        pnr = false;
      } else {
        pnr = self->v_23;
      };
      r = pnr;
      if (r_1) {
        ck_1 = Valetparker__St_MoveBack;
      } else {
        ck_1 = self->v_22;
      };
      switch (ck_1) {
        case Valetparker__St_MoveBack:
          v_20 = (self->v_19-1);
          v_18 = (self->v_17>0);
          if (v_18) {
            v_21 = v_20;
          } else {
            v_21 = 0;
          };
          v_15 = (r_1||r);
          if (self->v_14) {
            v_16 = true;
          } else {
            v_16 = v_15;
          };
          if (v_16) {
            timer_St_1_OAS_St_MoveBack = 10;
          } else {
            timer_St_1_OAS_St_MoveBack = v_21;
          };
          vr_St_1_OAS_St_MoveBack = 100;
          vl_St_1_OAS_St_MoveBack = 100;
          dir_St_1_OAS_St_MoveBack = false;
          oas_busy_St_1_OAS_St_MoveBack = true;
          currst8_St_1_OAS_St_MoveBack = 3;
          dir_St_1_OAS = dir_St_1_OAS_St_MoveBack;
          vl_St_1_OAS = vl_St_1_OAS_St_MoveBack;
          vr_St_1_OAS = vr_St_1_OAS_St_MoveBack;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveBack;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveBack;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveBack;
          break;
        case Valetparker__St_FirstImmediateRightTurn:
          timer_St_1_OAS_St_FirstImmediateRightTurn = self->timer_1;
          dir_St_1_OAS_St_FirstImmediateRightTurn = true;
          vr_St_1_OAS_St_FirstImmediateRightTurn = 0;
          vl_St_1_OAS_St_FirstImmediateRightTurn = 100;
          oas_busy_St_1_OAS_St_FirstImmediateRightTurn = true;
          currst8_St_1_OAS_St_FirstImmediateRightTurn = 4;
          v_12 = (icl<Valetparker__ir_turn_right_threshold);
          if (v_12) {
            nr_St_FirstImmediateRightTurn = true;
            ns_St_FirstImmediateRightTurn = Valetparker__St_SecondImmediateRightTurn;
          } else {
            nr_St_FirstImmediateRightTurn = false;
            ns_St_FirstImmediateRightTurn = Valetparker__St_FirstImmediateRightTurn;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_FirstImmediateRightTurn;
          vl_St_1_OAS = vl_St_1_OAS_St_FirstImmediateRightTurn;
          vr_St_1_OAS = vr_St_1_OAS_St_FirstImmediateRightTurn;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_FirstImmediateRightTurn;
          timer_St_1_OAS = timer_St_1_OAS_St_FirstImmediateRightTurn;
          currst8_St_1_OAS = currst8_St_1_OAS_St_FirstImmediateRightTurn;
          break;
        case Valetparker__St_SecondImmediateRightTurn:
          timer_St_1_OAS_St_SecondImmediateRightTurn = self->timer_1;
          dir_St_1_OAS_St_SecondImmediateRightTurn = true;
          vr_St_1_OAS_St_SecondImmediateRightTurn = 0;
          vl_St_1_OAS_St_SecondImmediateRightTurn = 100;
          oas_busy_St_1_OAS_St_SecondImmediateRightTurn = true;
          currst8_St_1_OAS_St_SecondImmediateRightTurn = 5;
          v_11 = (icl>Valetparker__ir_turn_right_threshold);
          if (v_11) {
            nr_St_SecondImmediateRightTurn = true;
            ns_St_SecondImmediateRightTurn = Valetparker__St_MaintainWallAlign;
          } else {
            nr_St_SecondImmediateRightTurn = false;
            ns_St_SecondImmediateRightTurn = Valetparker__St_SecondImmediateRightTurn;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_SecondImmediateRightTurn;
          vl_St_1_OAS = vl_St_1_OAS_St_SecondImmediateRightTurn;
          vr_St_1_OAS = vr_St_1_OAS_St_SecondImmediateRightTurn;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_SecondImmediateRightTurn;
          timer_St_1_OAS = timer_St_1_OAS_St_SecondImmediateRightTurn;
          currst8_St_1_OAS = currst8_St_1_OAS_St_SecondImmediateRightTurn;
          break;
        case Valetparker__St_MaintainWallAlign:
          timer_St_1_OAS_St_MaintainWallAlign = self->timer_1;
          v_10 = (ifl<Valetparker__ir_wall_dist_threshold);
          if (v_10) {
            turn_right = true;
          } else {
            turn_right = false;
          };
          if (turn_right) {
            vr_St_1_OAS_St_MaintainWallAlign = 0;
            vl_St_1_OAS_St_MaintainWallAlign = 100;
          } else {
            vr_St_1_OAS_St_MaintainWallAlign = 100;
            vl_St_1_OAS_St_MaintainWallAlign = 0;
          };
          dir_St_1_OAS_St_MaintainWallAlign = true;
          oas_busy_St_1_OAS_St_MaintainWallAlign = true;
          currst8_St_1_OAS_St_MaintainWallAlign = 6;
          if (tcc) {
            nr_St_MaintainWallAlign = true;
            ns_St_MaintainWallAlign = Valetparker__St_UnalignMoveBack;
          } else {
            nr_St_MaintainWallAlign = false;
            ns_St_MaintainWallAlign = Valetparker__St_MaintainWallAlign;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_MaintainWallAlign;
          vl_St_1_OAS = vl_St_1_OAS_St_MaintainWallAlign;
          vr_St_1_OAS = vr_St_1_OAS_St_MaintainWallAlign;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MaintainWallAlign;
          timer_St_1_OAS = timer_St_1_OAS_St_MaintainWallAlign;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MaintainWallAlign;
          break;
        case Valetparker__St_UnalignMoveBack:
          v_8 = (self->v_7-1);
          v_6 = (self->v_5>0);
          if (v_6) {
            v_9 = v_8;
          } else {
            v_9 = 0;
          };
          v_3 = (r_1||r);
          if (self->v_2) {
            v_4 = true;
          } else {
            v_4 = v_3;
          };
          if (v_4) {
            timer_St_1_OAS_St_UnalignMoveBack = 10;
          } else {
            timer_St_1_OAS_St_UnalignMoveBack = v_9;
          };
          vr_St_1_OAS_St_UnalignMoveBack = 100;
          vl_St_1_OAS_St_UnalignMoveBack = 100;
          dir_St_1_OAS_St_UnalignMoveBack = false;
          oas_busy_St_1_OAS_St_UnalignMoveBack = true;
          currst8_St_1_OAS_St_UnalignMoveBack = 7;
          dir_St_1_OAS = dir_St_1_OAS_St_UnalignMoveBack;
          vl_St_1_OAS = vl_St_1_OAS_St_UnalignMoveBack;
          vr_St_1_OAS = vr_St_1_OAS_St_UnalignMoveBack;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_UnalignMoveBack;
          timer_St_1_OAS = timer_St_1_OAS_St_UnalignMoveBack;
          currst8_St_1_OAS = currst8_St_1_OAS_St_UnalignMoveBack;
          break;
        case Valetparker__St_MoveRightTillWhiteLine:
          timer_St_1_OAS_St_MoveRightTillWhiteLine = self->timer_1;
          vr_St_1_OAS_St_MoveRightTillWhiteLine = 0;
          vl_St_1_OAS_St_MoveRightTillWhiteLine = 100;
          dir_St_1_OAS_St_MoveRightTillWhiteLine = true;
          oas_busy_St_1_OAS_St_MoveRightTillWhiteLine = true;
          currst8_St_1_OAS_St_MoveRightTillWhiteLine = 8;
          if (tcc) {
            nr_St_MoveRightTillWhiteLine = true;
            ns_St_MoveRightTillWhiteLine = Valetparker__St_BotIsOnLine;
          } else {
            nr_St_MoveRightTillWhiteLine = false;
            ns_St_MoveRightTillWhiteLine = Valetparker__St_MoveRightTillWhiteLine;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_MoveRightTillWhiteLine;
          vl_St_1_OAS = vl_St_1_OAS_St_MoveRightTillWhiteLine;
          vr_St_1_OAS = vr_St_1_OAS_St_MoveRightTillWhiteLine;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveRightTillWhiteLine;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveRightTillWhiteLine;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveRightTillWhiteLine;
          break;
        case Valetparker__St_BotIsOnLine:
          timer_St_1_OAS_St_BotIsOnLine = self->timer_1;
          oas_busy_St_1_OAS_St_BotIsOnLine = false;
          vr_St_1_OAS_St_BotIsOnLine = 0;
          vl_St_1_OAS_St_BotIsOnLine = 0;
          dir_St_1_OAS_St_BotIsOnLine = false;
          currst8_St_1_OAS_St_BotIsOnLine = 9;
          nr_St_BotIsOnLine = false;
          ns_St_BotIsOnLine = Valetparker__St_BotIsOnLine;
          dir_St_1_OAS = dir_St_1_OAS_St_BotIsOnLine;
          vl_St_1_OAS = vl_St_1_OAS_St_BotIsOnLine;
          vr_St_1_OAS = vr_St_1_OAS_St_BotIsOnLine;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_BotIsOnLine;
          timer_St_1_OAS = timer_St_1_OAS_St_BotIsOnLine;
          currst8_St_1_OAS = currst8_St_1_OAS_St_BotIsOnLine;
          break;
        default:
          break;
      };
      _out->dir = dir_St_1_OAS;
      _out->vl = vl_St_1_OAS;
      _out->vr = vr_St_1_OAS;
      oas_busy = oas_busy_St_1_OAS;
      v = !(oas_busy);
      if (v) {
        nr_1_St_1_OAS = true;
        ns_1_St_1_OAS = Valetparker__St_1_PID;
      } else {
        nr_1_St_1_OAS = false;
        ns_1_St_1_OAS = Valetparker__St_1_OAS;
      };
      timer = timer_St_1_OAS;
      currst8 = currst8_St_1_OAS;
      ns_1 = ns_1_St_1_OAS;
      nr_1 = nr_1_St_1_OAS;
      switch (ck_1) {
        case Valetparker__St_MoveBack:
          v_13 = (timer<=0);
          if (v_13) {
            nr_St_MoveBack = true;
            ns_St_MoveBack = Valetparker__St_FirstImmediateRightTurn;
          } else {
            nr_St_MoveBack = false;
            ns_St_MoveBack = Valetparker__St_MoveBack;
          };
          ns = ns_St_MoveBack;
          nr = nr_St_MoveBack;
          self->v_19 = timer;
          self->v_17 = timer;
          self->v_14 = false;
          break;
        case Valetparker__St_UnalignMoveBack:
          v_1 = (timer<=0);
          if (v_1) {
            nr_St_UnalignMoveBack = true;
            ns_St_UnalignMoveBack = Valetparker__St_MoveRightTillWhiteLine;
          } else {
            nr_St_UnalignMoveBack = false;
            ns_St_UnalignMoveBack = Valetparker__St_UnalignMoveBack;
          };
          ns = ns_St_UnalignMoveBack;
          nr = nr_St_UnalignMoveBack;
          self->v_7 = timer;
          self->v_5 = timer;
          self->v_2 = false;
          break;
        case Valetparker__St_BotIsOnLine:
          ns = ns_St_BotIsOnLine;
          nr = nr_St_BotIsOnLine;
          break;
        case Valetparker__St_MoveRightTillWhiteLine:
          ns = ns_St_MoveRightTillWhiteLine;
          nr = nr_St_MoveRightTillWhiteLine;
          break;
        case Valetparker__St_MaintainWallAlign:
          ns = ns_St_MaintainWallAlign;
          nr = nr_St_MaintainWallAlign;
          break;
        case Valetparker__St_SecondImmediateRightTurn:
          ns = ns_St_SecondImmediateRightTurn;
          nr = nr_St_SecondImmediateRightTurn;
          break;
        case Valetparker__St_FirstImmediateRightTurn:
          ns = ns_St_FirstImmediateRightTurn;
          nr = nr_St_FirstImmediateRightTurn;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  self->currst8_1 = currst8;
  self->timer_1 = timer;
  self->oas_busy_1 = oas_busy;
  self->pnr_1 = nr_1;
  switch (self->ck) {
    case Valetparker__St_1_PID:
      self->v_37 = error;
      self->v_35 = false;
      self->v_33 = error_integral;
      self->v_31 = false;
      break;
    case Valetparker__St_1_OAS:
      self->v_23 = nr;
      self->v_22 = ns;
      break;
    default:
      break;
  };
  self->ck = ns_1;;
}


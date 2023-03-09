/* --- Generated the 9/3/2023 at 19:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts obst_avoid.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "obst_avoid.h"

void Obst_avoid__obstavoider_reset(Obst_avoid__obstavoider_mem* self) {
  self->oas_busy_1 = false;
  self->pnr_1 = false;
  self->ck = Obst_avoid__St_1_Move;
  self->v_39 = false;
  self->v_3 = Obst_avoid__St_Brake;
  self->v_33 = true;
  self->v_26 = true;
  self->v_19 = true;
  self->v_12 = true;
  self->v_5 = true;
}

void Obst_avoid__obstavoider_step(int irf, int irs,
                                  Obst_avoid__obstavoider_out* _out,
                                  Obst_avoid__obstavoider_mem* self) {
  
  int r_1_St_1_OAS;
  Obst_avoid__st_1 s_1_St_1_OAS;
  int r_1_St_1_Move;
  Obst_avoid__st_1 s_1_St_1_Move;
  int v_1;
  int v_2;
  int r_St_Exit;
  Obst_avoid__st s_St_Exit;
  int r_St_FinalRight;
  Obst_avoid__st s_St_FinalRight;
  int r_St_FinalFront;
  Obst_avoid__st s_St_FinalFront;
  int r_St_SecondTurnLeft;
  Obst_avoid__st s_St_SecondTurnLeft;
  int r_St_MoveLittleBitFront3;
  Obst_avoid__st s_St_MoveLittleBitFront3;
  int r_St_SecondMoveFront;
  Obst_avoid__st s_St_SecondMoveFront;
  int r_St_MoveLittleFront;
  Obst_avoid__st s_St_MoveLittleFront;
  int r_St_FirstTurnLeft;
  Obst_avoid__st s_St_FirstTurnLeft;
  int r_St_MoveLittleBitFront2;
  Obst_avoid__st s_St_MoveLittleBitFront2;
  int r_St_MoveFront;
  Obst_avoid__st s_St_MoveFront;
  int r_St_FirstRightTurn;
  Obst_avoid__st s_St_FirstRightTurn;
  int r_St_Brake;
  Obst_avoid__st s_St_Brake;
  Obst_avoid__st ck_2;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_4;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_11;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_18;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_25;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_32;
  int nr_St_Exit;
  Obst_avoid__st ns_St_Exit;
  int currst8_St_1_OAS_St_Exit;
  int timer_St_1_OAS_St_Exit;
  int oas_busy_St_1_OAS_St_Exit;
  int dir_St_1_OAS_St_Exit;
  int nr_St_FinalRight;
  Obst_avoid__st ns_St_FinalRight;
  int currst8_St_1_OAS_St_FinalRight;
  int timer_St_1_OAS_St_FinalRight;
  int oas_busy_St_1_OAS_St_FinalRight;
  int dir_St_1_OAS_St_FinalRight;
  int nr_St_FinalFront;
  Obst_avoid__st ns_St_FinalFront;
  int currst8_St_1_OAS_St_FinalFront;
  int timer_St_1_OAS_St_FinalFront;
  int oas_busy_St_1_OAS_St_FinalFront;
  int dir_St_1_OAS_St_FinalFront;
  int nr_St_SecondTurnLeft;
  Obst_avoid__st ns_St_SecondTurnLeft;
  int currst8_St_1_OAS_St_SecondTurnLeft;
  int timer_St_1_OAS_St_SecondTurnLeft;
  int oas_busy_St_1_OAS_St_SecondTurnLeft;
  int dir_St_1_OAS_St_SecondTurnLeft;
  int nr_St_MoveLittleBitFront3;
  Obst_avoid__st ns_St_MoveLittleBitFront3;
  int currst8_St_1_OAS_St_MoveLittleBitFront3;
  int timer_St_1_OAS_St_MoveLittleBitFront3;
  int oas_busy_St_1_OAS_St_MoveLittleBitFront3;
  int dir_St_1_OAS_St_MoveLittleBitFront3;
  int nr_St_SecondMoveFront;
  Obst_avoid__st ns_St_SecondMoveFront;
  int currst8_St_1_OAS_St_SecondMoveFront;
  int timer_St_1_OAS_St_SecondMoveFront;
  int oas_busy_St_1_OAS_St_SecondMoveFront;
  int dir_St_1_OAS_St_SecondMoveFront;
  int nr_St_MoveLittleFront;
  Obst_avoid__st ns_St_MoveLittleFront;
  int currst8_St_1_OAS_St_MoveLittleFront;
  int timer_St_1_OAS_St_MoveLittleFront;
  int oas_busy_St_1_OAS_St_MoveLittleFront;
  int dir_St_1_OAS_St_MoveLittleFront;
  int nr_St_FirstTurnLeft;
  Obst_avoid__st ns_St_FirstTurnLeft;
  int currst8_St_1_OAS_St_FirstTurnLeft;
  int timer_St_1_OAS_St_FirstTurnLeft;
  int oas_busy_St_1_OAS_St_FirstTurnLeft;
  int dir_St_1_OAS_St_FirstTurnLeft;
  int nr_St_MoveLittleBitFront2;
  Obst_avoid__st ns_St_MoveLittleBitFront2;
  int currst8_St_1_OAS_St_MoveLittleBitFront2;
  int timer_St_1_OAS_St_MoveLittleBitFront2;
  int oas_busy_St_1_OAS_St_MoveLittleBitFront2;
  int dir_St_1_OAS_St_MoveLittleBitFront2;
  int nr_St_MoveFront;
  Obst_avoid__st ns_St_MoveFront;
  int currst8_St_1_OAS_St_MoveFront;
  int timer_St_1_OAS_St_MoveFront;
  int oas_busy_St_1_OAS_St_MoveFront;
  int dir_St_1_OAS_St_MoveFront;
  int nr_St_FirstRightTurn;
  Obst_avoid__st ns_St_FirstRightTurn;
  int currst8_St_1_OAS_St_FirstRightTurn;
  int timer_St_1_OAS_St_FirstRightTurn;
  int oas_busy_St_1_OAS_St_FirstRightTurn;
  int dir_St_1_OAS_St_FirstRightTurn;
  int nr_St_Brake;
  Obst_avoid__st ns_St_Brake;
  int currst8_St_1_OAS_St_Brake;
  int timer_St_1_OAS_St_Brake;
  int oas_busy_St_1_OAS_St_Brake;
  int dir_St_1_OAS_St_Brake;
  Obst_avoid__st ck_3;
  int v;
  Obst_avoid__st s;
  Obst_avoid__st ns;
  int r;
  int nr;
  int pnr;
  int nr_1_St_1_OAS;
  Obst_avoid__st_1 ns_1_St_1_OAS;
  int currst8_St_1_OAS;
  int timer_St_1_OAS;
  int oas_busy_St_1_OAS;
  int dir_St_1_OAS;
  int nr_1_St_1_Move;
  Obst_avoid__st_1 ns_1_St_1_Move;
  int currst8_St_1_Move;
  int timer_St_1_Move;
  int oas_busy_St_1_Move;
  int dir_St_1_Move;
  Obst_avoid__st_1 ck_1;
  Obst_avoid__st_1 s_1;
  Obst_avoid__st_1 ns_1;
  int r_1;
  int nr_1;
  int oas_busy;
  int timer;
  int currst8;
  switch (self->ck) {
    case Obst_avoid__St_1_Move:
      if (irf) {
        r_1_St_1_Move = true;
        s_1_St_1_Move = Obst_avoid__St_1_OAS;
      } else {
        r_1_St_1_Move = self->pnr_1;
        s_1_St_1_Move = Obst_avoid__St_1_Move;
      };
      s_1 = s_1_St_1_Move;
      r_1 = r_1_St_1_Move;
      break;
    case Obst_avoid__St_1_OAS:
      r_1_St_1_OAS = self->pnr_1;
      s_1_St_1_OAS = Obst_avoid__St_1_OAS;
      s_1 = s_1_St_1_OAS;
      r_1 = r_1_St_1_OAS;
      break;
    default:
      break;
  };
  ck_1 = s_1;
  switch (ck_1) {
    case Obst_avoid__St_1_Move:
      timer_St_1_Move = self->timer_1;
      oas_busy_St_1_Move = false;
      dir_St_1_Move = 1;
      currst8_St_1_Move = 1;
      nr_1_St_1_Move = false;
      ns_1_St_1_Move = Obst_avoid__St_1_Move;
      _out->dir = dir_St_1_Move;
      oas_busy = oas_busy_St_1_Move;
      timer = timer_St_1_Move;
      currst8 = currst8_St_1_Move;
      ns_1 = ns_1_St_1_Move;
      nr_1 = nr_1_St_1_Move;
      break;
    case Obst_avoid__St_1_OAS:
      if (r_1) {
        pnr = false;
        ck_2 = Obst_avoid__St_Brake;
      } else {
        pnr = self->v_39;
        ck_2 = self->v_3;
      };
      switch (ck_2) {
        case Obst_avoid__St_Brake:
          r_St_Brake = pnr;
          s_St_Brake = Obst_avoid__St_Brake;
          s = s_St_Brake;
          r = r_St_Brake;
          break;
        case Obst_avoid__St_FirstRightTurn:
          r_St_FirstRightTurn = pnr;
          s_St_FirstRightTurn = Obst_avoid__St_FirstRightTurn;
          s = s_St_FirstRightTurn;
          r = r_St_FirstRightTurn;
          break;
        case Obst_avoid__St_MoveFront:
          v_2 = !(irs);
          if (v_2) {
            r_St_MoveFront = true;
            s_St_MoveFront = Obst_avoid__St_MoveLittleBitFront2;
          } else {
            r_St_MoveFront = pnr;
            s_St_MoveFront = Obst_avoid__St_MoveFront;
          };
          s = s_St_MoveFront;
          r = r_St_MoveFront;
          break;
        case Obst_avoid__St_MoveLittleBitFront2:
          r_St_MoveLittleBitFront2 = pnr;
          s_St_MoveLittleBitFront2 = Obst_avoid__St_MoveLittleBitFront2;
          s = s_St_MoveLittleBitFront2;
          r = r_St_MoveLittleBitFront2;
          break;
        case Obst_avoid__St_FirstTurnLeft:
          r_St_FirstTurnLeft = pnr;
          s_St_FirstTurnLeft = Obst_avoid__St_FirstTurnLeft;
          s = s_St_FirstTurnLeft;
          r = r_St_FirstTurnLeft;
          break;
        case Obst_avoid__St_MoveLittleFront:
          r_St_MoveLittleFront = pnr;
          s_St_MoveLittleFront = Obst_avoid__St_MoveLittleFront;
          s = s_St_MoveLittleFront;
          r = r_St_MoveLittleFront;
          break;
        case Obst_avoid__St_SecondMoveFront:
          v_1 = !(irs);
          if (v_1) {
            r_St_SecondMoveFront = true;
            s_St_SecondMoveFront = Obst_avoid__St_MoveLittleBitFront3;
          } else {
            r_St_SecondMoveFront = pnr;
            s_St_SecondMoveFront = Obst_avoid__St_SecondMoveFront;
          };
          s = s_St_SecondMoveFront;
          r = r_St_SecondMoveFront;
          break;
        case Obst_avoid__St_MoveLittleBitFront3:
          r_St_MoveLittleBitFront3 = pnr;
          s_St_MoveLittleBitFront3 = Obst_avoid__St_MoveLittleBitFront3;
          s = s_St_MoveLittleBitFront3;
          r = r_St_MoveLittleBitFront3;
          break;
        case Obst_avoid__St_SecondTurnLeft:
          r_St_SecondTurnLeft = pnr;
          s_St_SecondTurnLeft = Obst_avoid__St_SecondTurnLeft;
          s = s_St_SecondTurnLeft;
          r = r_St_SecondTurnLeft;
          break;
        case Obst_avoid__St_FinalFront:
          r_St_FinalFront = pnr;
          s_St_FinalFront = Obst_avoid__St_FinalFront;
          s = s_St_FinalFront;
          r = r_St_FinalFront;
          break;
        case Obst_avoid__St_FinalRight:
          r_St_FinalRight = pnr;
          s_St_FinalRight = Obst_avoid__St_FinalRight;
          s = s_St_FinalRight;
          r = r_St_FinalRight;
          break;
        case Obst_avoid__St_Exit:
          r_St_Exit = pnr;
          s_St_Exit = Obst_avoid__St_Exit;
          s = s_St_Exit;
          r = r_St_Exit;
          break;
        default:
          break;
      };
      ck_3 = s;
      switch (ck_3) {
        case Obst_avoid__St_Brake:
          oas_busy_St_1_OAS_St_Brake = true;
          dir_St_1_OAS_St_Brake = 6;
          v_37 = (self->timer_1-1);
          v_36 = (self->timer_1>0);
          if (v_36) {
            v_38 = v_37;
          } else {
            v_38 = 0;
          };
          v_34 = (r_1||r);
          if (self->v_33) {
            v_35 = true;
          } else {
            v_35 = v_34;
          };
          if (v_35) {
            timer_St_1_OAS_St_Brake = 200;
          } else {
            timer_St_1_OAS_St_Brake = v_38;
          };
          currst8_St_1_OAS_St_Brake = 2;
          dir_St_1_OAS = dir_St_1_OAS_St_Brake;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Brake;
          timer_St_1_OAS = timer_St_1_OAS_St_Brake;
          currst8_St_1_OAS = currst8_St_1_OAS_St_Brake;
          break;
        case Obst_avoid__St_FirstRightTurn:
          timer_St_1_OAS_St_FirstRightTurn = self->timer_1;
          oas_busy_St_1_OAS_St_FirstRightTurn = true;
          dir_St_1_OAS_St_FirstRightTurn = 4;
          currst8_St_1_OAS_St_FirstRightTurn = 3;
          if (true) {
            nr_St_FirstRightTurn = true;
          } else {
            nr_St_FirstRightTurn = false;
          };
          if (true) {
            ns_St_FirstRightTurn = Obst_avoid__St_MoveFront;
          } else {
            ns_St_FirstRightTurn = Obst_avoid__St_FirstRightTurn;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_FirstRightTurn;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_FirstRightTurn;
          timer_St_1_OAS = timer_St_1_OAS_St_FirstRightTurn;
          currst8_St_1_OAS = currst8_St_1_OAS_St_FirstRightTurn;
          break;
        case Obst_avoid__St_MoveFront:
          timer_St_1_OAS_St_MoveFront = self->timer_1;
          dir_St_1_OAS_St_MoveFront = 1;
          oas_busy_St_1_OAS_St_MoveFront = true;
          currst8_St_1_OAS_St_MoveFront = 4;
          nr_St_MoveFront = false;
          ns_St_MoveFront = Obst_avoid__St_MoveFront;
          dir_St_1_OAS = dir_St_1_OAS_St_MoveFront;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveFront;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveFront;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveFront;
          break;
        case Obst_avoid__St_MoveLittleBitFront2:
          oas_busy_St_1_OAS_St_MoveLittleBitFront2 = true;
          dir_St_1_OAS_St_MoveLittleBitFront2 = 1;
          v_30 = (self->timer_1-1);
          v_29 = (self->timer_1>0);
          if (v_29) {
            v_31 = v_30;
          } else {
            v_31 = 0;
          };
          v_27 = (r_1||r);
          if (self->v_26) {
            v_28 = true;
          } else {
            v_28 = v_27;
          };
          if (v_28) {
            timer_St_1_OAS_St_MoveLittleBitFront2 = 6;
          } else {
            timer_St_1_OAS_St_MoveLittleBitFront2 = v_31;
          };
          currst8_St_1_OAS_St_MoveLittleBitFront2 = 44;
          dir_St_1_OAS = dir_St_1_OAS_St_MoveLittleBitFront2;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveLittleBitFront2;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveLittleBitFront2;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveLittleBitFront2;
          break;
        case Obst_avoid__St_FirstTurnLeft:
          timer_St_1_OAS_St_FirstTurnLeft = self->timer_1;
          dir_St_1_OAS_St_FirstTurnLeft = 2;
          oas_busy_St_1_OAS_St_FirstTurnLeft = true;
          currst8_St_1_OAS_St_FirstTurnLeft = 5;
          if (true) {
            nr_St_FirstTurnLeft = true;
          } else {
            nr_St_FirstTurnLeft = false;
          };
          if (true) {
            ns_St_FirstTurnLeft = Obst_avoid__St_MoveLittleFront;
          } else {
            ns_St_FirstTurnLeft = Obst_avoid__St_FirstTurnLeft;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_FirstTurnLeft;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_FirstTurnLeft;
          timer_St_1_OAS = timer_St_1_OAS_St_FirstTurnLeft;
          currst8_St_1_OAS = currst8_St_1_OAS_St_FirstTurnLeft;
          break;
        case Obst_avoid__St_MoveLittleFront:
          oas_busy_St_1_OAS_St_MoveLittleFront = true;
          dir_St_1_OAS_St_MoveLittleFront = 1;
          v_23 = (self->timer_1-1);
          v_22 = (self->timer_1>0);
          if (v_22) {
            v_24 = v_23;
          } else {
            v_24 = 0;
          };
          v_20 = (r_1||r);
          if (self->v_19) {
            v_21 = true;
          } else {
            v_21 = v_20;
          };
          if (v_21) {
            timer_St_1_OAS_St_MoveLittleFront = 8;
          } else {
            timer_St_1_OAS_St_MoveLittleFront = v_24;
          };
          currst8_St_1_OAS_St_MoveLittleFront = 4;
          dir_St_1_OAS = dir_St_1_OAS_St_MoveLittleFront;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveLittleFront;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveLittleFront;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveLittleFront;
          break;
        case Obst_avoid__St_SecondMoveFront:
          timer_St_1_OAS_St_SecondMoveFront = self->timer_1;
          dir_St_1_OAS_St_SecondMoveFront = 1;
          oas_busy_St_1_OAS_St_SecondMoveFront = true;
          currst8_St_1_OAS_St_SecondMoveFront = 7;
          nr_St_SecondMoveFront = false;
          ns_St_SecondMoveFront = Obst_avoid__St_SecondMoveFront;
          dir_St_1_OAS = dir_St_1_OAS_St_SecondMoveFront;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_SecondMoveFront;
          timer_St_1_OAS = timer_St_1_OAS_St_SecondMoveFront;
          currst8_St_1_OAS = currst8_St_1_OAS_St_SecondMoveFront;
          break;
        case Obst_avoid__St_MoveLittleBitFront3:
          oas_busy_St_1_OAS_St_MoveLittleBitFront3 = true;
          dir_St_1_OAS_St_MoveLittleBitFront3 = 1;
          v_16 = (self->timer_1-1);
          v_15 = (self->timer_1>0);
          if (v_15) {
            v_17 = v_16;
          } else {
            v_17 = 0;
          };
          v_13 = (r_1||r);
          if (self->v_12) {
            v_14 = true;
          } else {
            v_14 = v_13;
          };
          if (v_14) {
            timer_St_1_OAS_St_MoveLittleBitFront3 = 4;
          } else {
            timer_St_1_OAS_St_MoveLittleBitFront3 = v_17;
          };
          currst8_St_1_OAS_St_MoveLittleBitFront3 = 77;
          dir_St_1_OAS = dir_St_1_OAS_St_MoveLittleBitFront3;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_MoveLittleBitFront3;
          timer_St_1_OAS = timer_St_1_OAS_St_MoveLittleBitFront3;
          currst8_St_1_OAS = currst8_St_1_OAS_St_MoveLittleBitFront3;
          break;
        case Obst_avoid__St_SecondTurnLeft:
          timer_St_1_OAS_St_SecondTurnLeft = self->timer_1;
          dir_St_1_OAS_St_SecondTurnLeft = 2;
          oas_busy_St_1_OAS_St_SecondTurnLeft = true;
          currst8_St_1_OAS_St_SecondTurnLeft = 8;
          if (true) {
            nr_St_SecondTurnLeft = true;
          } else {
            nr_St_SecondTurnLeft = false;
          };
          if (true) {
            ns_St_SecondTurnLeft = Obst_avoid__St_FinalFront;
          } else {
            ns_St_SecondTurnLeft = Obst_avoid__St_SecondTurnLeft;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_SecondTurnLeft;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_SecondTurnLeft;
          timer_St_1_OAS = timer_St_1_OAS_St_SecondTurnLeft;
          currst8_St_1_OAS = currst8_St_1_OAS_St_SecondTurnLeft;
          break;
        case Obst_avoid__St_FinalFront:
          oas_busy_St_1_OAS_St_FinalFront = true;
          v_9 = (self->timer_1-1);
          v_8 = (self->timer_1>0);
          if (v_8) {
            v_10 = v_9;
          } else {
            v_10 = 0;
          };
          v_6 = (r_1||r);
          if (self->v_5) {
            v_7 = true;
          } else {
            v_7 = v_6;
          };
          if (v_7) {
            timer_St_1_OAS_St_FinalFront = 4;
          } else {
            timer_St_1_OAS_St_FinalFront = v_10;
          };
          dir_St_1_OAS_St_FinalFront = 1;
          currst8_St_1_OAS_St_FinalFront = 9;
          dir_St_1_OAS = dir_St_1_OAS_St_FinalFront;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_FinalFront;
          timer_St_1_OAS = timer_St_1_OAS_St_FinalFront;
          currst8_St_1_OAS = currst8_St_1_OAS_St_FinalFront;
          break;
        case Obst_avoid__St_FinalRight:
          timer_St_1_OAS_St_FinalRight = self->timer_1;
          oas_busy_St_1_OAS_St_FinalRight = true;
          dir_St_1_OAS_St_FinalRight = 4;
          currst8_St_1_OAS_St_FinalRight = 10;
          if (true) {
            nr_St_FinalRight = true;
          } else {
            nr_St_FinalRight = false;
          };
          if (true) {
            ns_St_FinalRight = Obst_avoid__St_Exit;
          } else {
            ns_St_FinalRight = Obst_avoid__St_FinalRight;
          };
          dir_St_1_OAS = dir_St_1_OAS_St_FinalRight;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_FinalRight;
          timer_St_1_OAS = timer_St_1_OAS_St_FinalRight;
          currst8_St_1_OAS = currst8_St_1_OAS_St_FinalRight;
          break;
        case Obst_avoid__St_Exit:
          timer_St_1_OAS_St_Exit = self->timer_1;
          oas_busy_St_1_OAS_St_Exit = false;
          dir_St_1_OAS_St_Exit = 0;
          currst8_St_1_OAS_St_Exit = 11;
          nr_St_Exit = false;
          ns_St_Exit = Obst_avoid__St_Exit;
          dir_St_1_OAS = dir_St_1_OAS_St_Exit;
          oas_busy_St_1_OAS = oas_busy_St_1_OAS_St_Exit;
          timer_St_1_OAS = timer_St_1_OAS_St_Exit;
          currst8_St_1_OAS = currst8_St_1_OAS_St_Exit;
          break;
        default:
          break;
      };
      _out->dir = dir_St_1_OAS;
      oas_busy = oas_busy_St_1_OAS;
      v = !(oas_busy);
      if (v) {
        nr_1_St_1_OAS = true;
        ns_1_St_1_OAS = Obst_avoid__St_1_Move;
      } else {
        nr_1_St_1_OAS = false;
        ns_1_St_1_OAS = Obst_avoid__St_1_OAS;
      };
      timer = timer_St_1_OAS;
      currst8 = currst8_St_1_OAS;
      ns_1 = ns_1_St_1_OAS;
      nr_1 = nr_1_St_1_OAS;
      switch (ck_3) {
        case Obst_avoid__St_Brake:
          v_32 = (timer<=0);
          if (v_32) {
            nr_St_Brake = true;
            ns_St_Brake = Obst_avoid__St_FirstRightTurn;
          } else {
            nr_St_Brake = false;
            ns_St_Brake = Obst_avoid__St_Brake;
          };
          ns = ns_St_Brake;
          nr = nr_St_Brake;
          break;
        case Obst_avoid__St_MoveLittleBitFront2:
          v_25 = (timer<=0);
          if (v_25) {
            nr_St_MoveLittleBitFront2 = true;
            ns_St_MoveLittleBitFront2 = Obst_avoid__St_FirstTurnLeft;
          } else {
            nr_St_MoveLittleBitFront2 = false;
            ns_St_MoveLittleBitFront2 = Obst_avoid__St_MoveLittleBitFront2;
          };
          ns = ns_St_MoveLittleBitFront2;
          nr = nr_St_MoveLittleBitFront2;
          break;
        case Obst_avoid__St_MoveLittleFront:
          v_18 = (timer<=0);
          if (v_18) {
            nr_St_MoveLittleFront = true;
            ns_St_MoveLittleFront = Obst_avoid__St_SecondMoveFront;
          } else {
            nr_St_MoveLittleFront = false;
            ns_St_MoveLittleFront = Obst_avoid__St_MoveLittleFront;
          };
          ns = ns_St_MoveLittleFront;
          nr = nr_St_MoveLittleFront;
          break;
        case Obst_avoid__St_MoveLittleBitFront3:
          v_11 = (timer<=0);
          if (v_11) {
            nr_St_MoveLittleBitFront3 = true;
            ns_St_MoveLittleBitFront3 = Obst_avoid__St_SecondTurnLeft;
          } else {
            nr_St_MoveLittleBitFront3 = false;
            ns_St_MoveLittleBitFront3 = Obst_avoid__St_MoveLittleBitFront3;
          };
          ns = ns_St_MoveLittleBitFront3;
          nr = nr_St_MoveLittleBitFront3;
          break;
        case Obst_avoid__St_FinalFront:
          v_4 = (timer<=0);
          if (v_4) {
            nr_St_FinalFront = true;
            ns_St_FinalFront = Obst_avoid__St_FinalRight;
          } else {
            nr_St_FinalFront = false;
            ns_St_FinalFront = Obst_avoid__St_FinalFront;
          };
          ns = ns_St_FinalFront;
          nr = nr_St_FinalFront;
          break;
        case Obst_avoid__St_Exit:
          ns = ns_St_Exit;
          nr = nr_St_Exit;
          break;
        case Obst_avoid__St_FinalRight:
          ns = ns_St_FinalRight;
          nr = nr_St_FinalRight;
          break;
        case Obst_avoid__St_SecondTurnLeft:
          ns = ns_St_SecondTurnLeft;
          nr = nr_St_SecondTurnLeft;
          break;
        case Obst_avoid__St_SecondMoveFront:
          ns = ns_St_SecondMoveFront;
          nr = nr_St_SecondMoveFront;
          break;
        case Obst_avoid__St_FirstTurnLeft:
          ns = ns_St_FirstTurnLeft;
          nr = nr_St_FirstTurnLeft;
          break;
        case Obst_avoid__St_MoveFront:
          ns = ns_St_MoveFront;
          nr = nr_St_MoveFront;
          break;
        case Obst_avoid__St_FirstRightTurn:
          ns = ns_St_FirstRightTurn;
          nr = nr_St_FirstRightTurn;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  _out->cs = currst8;
  self->currst8_1 = currst8;
  self->timer_1 = timer;
  self->oas_busy_1 = oas_busy;
  self->pnr_1 = nr_1;
  self->ck = ns_1;
  switch (ck_1) {
    case Obst_avoid__St_1_OAS:
      self->v_39 = nr;
      self->v_3 = ns;
      switch (ck_3) {
        case Obst_avoid__St_Brake:
          self->v_33 = false;
          break;
        case Obst_avoid__St_MoveLittleBitFront2:
          self->v_26 = false;
          break;
        case Obst_avoid__St_MoveLittleFront:
          self->v_19 = false;
          break;
        case Obst_avoid__St_MoveLittleBitFront3:
          self->v_12 = false;
          break;
        case Obst_avoid__St_FinalFront:
          self->v_5 = false;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };;
}


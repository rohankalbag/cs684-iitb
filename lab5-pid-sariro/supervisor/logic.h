/* --- Generated the 30/3/2023 at 15:26 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#ifndef LOGIC_H
#define LOGIC_H

#include "logic_types.h"
typedef struct Logic__pidline_mem {
  int v_12;
  int v_10;
  int v_8;
  int v_6;
  Logic__st ck;
  int pnr;
  int current_state_1;
} Logic__pidline_mem;

typedef struct Logic__pidline_out {
  int dir;
  int v_left;
  int v_right;
  int cs;
  int out_drive;
} Logic__pidline_out;

void Logic__pidline_reset(Logic__pidline_mem* self);

void Logic__pidline_step(int cfr, int ccr, int ccc, int ccl, int cfl,
                         Logic__pidline_out* _out, Logic__pidline_mem* self);

#endif // LOGIC_H

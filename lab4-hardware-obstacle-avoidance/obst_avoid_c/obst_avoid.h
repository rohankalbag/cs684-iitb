/* --- Generated the 9/3/2023 at 19:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts obst_avoid.ept --- */

#ifndef OBST_AVOID_H
#define OBST_AVOID_H

#include "obst_avoid_types.h"
typedef struct Obst_avoid__obstavoider_mem {
  Obst_avoid__st_1 ck;
  Obst_avoid__st v_3;
  int v_5;
  int v_12;
  int v_19;
  int v_26;
  int v_33;
  int v_39;
  int pnr_1;
  int currst8_1;
  int timer_1;
  int oas_busy_1;
} Obst_avoid__obstavoider_mem;

typedef struct Obst_avoid__obstavoider_out {
  int dir;
  int cs;
} Obst_avoid__obstavoider_out;

void Obst_avoid__obstavoider_reset(Obst_avoid__obstavoider_mem* self);

void Obst_avoid__obstavoider_step(int irf, int irs,
                                  Obst_avoid__obstavoider_out* _out,
                                  Obst_avoid__obstavoider_mem* self);

#endif // OBST_AVOID_H

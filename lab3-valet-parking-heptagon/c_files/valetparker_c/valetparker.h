/* --- Generated the 1/3/2023 at 16:34 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s parkingnode -hepts valetparker.ept --- */

#ifndef VALETPARKER_H
#define VALETPARKER_H

#include "valetparker_types.h"
typedef struct Valetparker__parkingnode_mem {
  int v_7;
  int v_5;
  int v_2;
  int v_19;
  int v_17;
  int v_14;
  Valetparker__st v_22;
  int v_23;
  int v_37;
  int v_35;
  int v_33;
  int v_31;
  Valetparker__st_1 ck;
  int pnr_1;
  int currst8_1;
  int timer_1;
  int oas_busy_1;
} Valetparker__parkingnode_mem;

typedef struct Valetparker__parkingnode_out {
  int dir;
  int vl;
  int vr;
} Valetparker__parkingnode_out;

void Valetparker__parkingnode_reset(Valetparker__parkingnode_mem* self);

void Valetparker__parkingnode_step(int cfl, int ccl, int ccc, int ccr,
                                   int cfr, int ifl, int icl, int icc,
                                   int icr, int ifr,
                                   Valetparker__parkingnode_out* _out,
                                   Valetparker__parkingnode_mem* self);

#endif // VALETPARKER_H

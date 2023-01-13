/* --- Generated the 27/1/2021 at 15:57 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. jan. 7 20:13:49 CET 2021) --- */
/* --- Command line: /home/kirito/.opam/4.03.0/bin/heptc -target c -s min_avg -hepts min_avg.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "min_avg.h"

void Min_avg__min_avg_reset(Min_avg__min_avg_mem* self) {
  self->v_1 = true;
}

void Min_avg__min_avg_step(int x, int y, Min_avg__min_avg_out* _out,
                           Min_avg__min_avg_mem* self) {
  
  int v_5;
  int v_3;
  int v;
  int avg;
  v = (x+y);
  avg = (v/2);
  v_3 = (avg<self->v_2);
  if (v_3) {
    v_5 = avg;
  } else {
    v_5 = self->v_4;
  };
  if (self->v_1) {
    _out->out = avg;
  } else {
    _out->out = v_5;
  };
  self->v_4 = _out->out;
  self->v_2 = _out->out;
  self->v_1 = false;;
}


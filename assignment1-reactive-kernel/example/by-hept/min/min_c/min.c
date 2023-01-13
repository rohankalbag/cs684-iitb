/* --- Generated the 27/1/2021 at 15:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. jan. 7 20:13:49 CET 2021) --- */
/* --- Command line: /home/kirito/.opam/4.03.0/bin/heptc -target c -s min -hepts min.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "min.h"

void Min__min_reset(Min__min_mem* self) {
  self->v = true;
}

void Min__min_step(int x, Min__min_out* _out, Min__min_mem* self) {
  
  int v_4;
  int v_2;
  v_2 = (x<self->v_1);
  if (v_2) {
    v_4 = x;
  } else {
    v_4 = self->v_3;
  };
  if (self->v) {
    _out->out = 0;
  } else {
    _out->out = v_4;
  };
  self->v_3 = _out->out;
  self->v_1 = _out->out;
  self->v = false;;
}


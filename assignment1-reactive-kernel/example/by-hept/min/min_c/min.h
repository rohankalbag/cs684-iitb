/* --- Generated the 27/1/2021 at 15:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. jan. 7 20:13:49 CET 2021) --- */
/* --- Command line: /home/kirito/.opam/4.03.0/bin/heptc -target c -s min -hepts min.ept --- */

#ifndef MIN_H
#define MIN_H

#include "min_types.h"
typedef struct Min__min_mem {
  int v_3;
  int v_1;
  int v;
} Min__min_mem;

typedef struct Min__min_out {
  int out;
} Min__min_out;

void Min__min_reset(Min__min_mem* self);

void Min__min_step(int x, Min__min_out* _out, Min__min_mem* self);

#endif // MIN_H

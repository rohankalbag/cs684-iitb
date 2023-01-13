/* --- Generated the 27/1/2021 at 15:57 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. jan. 7 20:13:49 CET 2021) --- */
/* --- Command line: /home/kirito/.opam/4.03.0/bin/heptc -target c -s min_avg -hepts min_avg.ept --- */

#ifndef MIN_AVG_H
#define MIN_AVG_H

#include "min_avg_types.h"
typedef struct Min_avg__min_avg_mem {
  int v_4;
  int v_2;
  int v_1;
} Min_avg__min_avg_mem;

typedef struct Min_avg__min_avg_out {
  int out;
} Min_avg__min_avg_out;

void Min_avg__min_avg_reset(Min_avg__min_avg_mem* self);

void Min_avg__min_avg_step(int x, int y, Min_avg__min_avg_out* _out,
                           Min_avg__min_avg_mem* self);

#endif // MIN_AVG_H

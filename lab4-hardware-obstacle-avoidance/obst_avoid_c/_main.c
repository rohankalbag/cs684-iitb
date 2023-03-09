/* --- Generated the 9/3/2023 at 19:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s obstavoider -hepts obst_avoid.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Obst_avoid__obstavoider_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int irf;
  int irs;
  Obst_avoid__obstavoider_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Obst_avoid__obstavoider_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &irf)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &irs)==EOF)) {
      return 0;
    };;
    Obst_avoid__obstavoider_step(irf, irs, &_res, &mem);
    printf("%d\n", _res.dir);
    printf("%d\n", _res.cs);
    fflush(stdout);
  };
  return 0;
}


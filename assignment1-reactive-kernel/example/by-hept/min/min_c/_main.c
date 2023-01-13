/* --- Generated the 27/1/2021 at 15:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled thu. jan. 7 20:13:49 CET 2021) --- */
/* --- Command line: /home/kirito/.opam/4.03.0/bin/heptc -target c -s min -hepts min.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Min__min_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int x;
  Min__min_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Min__min_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &x)==EOF)) {
      return 0;
    };;
    Min__min_step(x, &_res, &mem);
    printf("%d\n", _res.out);
    fflush(stdout);
  };
  return 0;
}


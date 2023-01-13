#include <stdio.h>
#include "min_avg.h"

memory mem;
int main(int argc, char** argv) {
  int step_c = 0;
  int x;
  int y;
  out _res;

  reset(&mem);
  while (1) {
    step_c = (step_c + 1);
    printf("x = ");
    if ((scanf("%d", &x)==EOF)) {
      return 0;
    }
    printf("y = ");
    if ((scanf("%d", &y)==EOF)) {
      return 0;
    }
    step(x, y, &_res, &mem);
    printf("min_avg = %d\n", _res.out);
    fflush(stdout);
  };

  return 0;
}

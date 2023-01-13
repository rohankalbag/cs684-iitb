#include <stdio.h>
#include "var.h"

memory mem;
int main(int argc, char** argv) {
  int step_c = 0;
  int x;
  out _res;

  reset(&mem);
  while (1) {
    step_c = (step_c + 1);
    printf("x = ");
    if ((scanf("%d", &x)==EOF)) {
      return 0;
    }
    step(x, &_res, &mem);
    printf("variance = %.6f\n", _res.out_var);
    fflush(stdout);
  };

  return 0;
}
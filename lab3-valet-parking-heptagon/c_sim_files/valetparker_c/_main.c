/* --- Generated the 1/3/2023 at 16:34 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s parkingnode -hepts valetparker.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Valetparker__parkingnode_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int cfl;
  int ccl;
  int ccc;
  int ccr;
  int cfr;
  int ifl;
  int icl;
  int icc;
  int icr;
  int ifr;
  Valetparker__parkingnode_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Valetparker__parkingnode_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &cfl)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ccl)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ccc)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ccr)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &cfr)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ifl)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &icl)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &icc)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &icr)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &ifr)==EOF)) {
      return 0;
    };;
    Valetparker__parkingnode_step(cfl, ccl, ccc, ccr, cfr, ifl, icl, icc,
                                  icr, ifr, &_res, &mem);
    printf("%d\n", _res.dir);
    printf("%d\n", _res.vl);
    printf("%d\n", _res.vr);
    fflush(stdout);
  };
  return 0;
}


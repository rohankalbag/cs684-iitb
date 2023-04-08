/* --- Generated the 9/4/2023 at 1:8 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_PIDFollower")==0)) {
    return Logic__St_PIDFollower;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_PIDFollower:
      strcpy(buf, "St_PIDFollower");
      break;
    default:
      break;
  };
  return buf;
}


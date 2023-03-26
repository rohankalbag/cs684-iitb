/* --- Generated the 26/3/2023 at 19:1 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. jan. 9 12:23:25 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s pidlinex -hepts Logic.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "logic_types.h"

Logic__st Logic__st_of_string(char* s) {
  if ((strcmp(s, "St_Start")==0)) {
    return Logic__St_Start;
  };
  if ((strcmp(s, "St_ReachedDest")==0)) {
    return Logic__St_ReachedDest;
  };
  if ((strcmp(s, "St_PIDFollower")==0)) {
    return Logic__St_PIDFollower;
  };
}

char* string_of_Logic__st(Logic__st x, char* buf) {
  switch (x) {
    case Logic__St_Start:
      strcpy(buf, "St_Start");
      break;
    case Logic__St_ReachedDest:
      strcpy(buf, "St_ReachedDest");
      break;
    case Logic__St_PIDFollower:
      strcpy(buf, "St_PIDFollower");
      break;
    default:
      break;
  };
  return buf;
}


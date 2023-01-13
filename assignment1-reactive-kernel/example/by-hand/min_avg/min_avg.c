#include <stdio.h>
#include "min_avg.h"

void reset(memory* self) {
    self->first = 1;
}

void step(int x, int y, out* _out, memory* self) {
    if (self->first) {
        // output of first run is the input itself
        _out->out = (x + y)/2;
        // after first run make first 0 (false)
        self->first = 0;
    } else {
        _out->out = self->lastMin < (x + y)/2 ? self->lastMin : (x + y)/2;
    };
    // update memory for the next step
    self->lastMin = _out->out;
}

#include <stdio.h>
#include "min.h"

void reset(memory* self) {
    self->first = 1;
}

void step(int x, out* _out, memory* self) {
    if (self->first) {
        // output of first run is the input itself
        _out->out = x;
        // after first run make first 0 (false)
        self->first = 0;
    } else {
        _out->out = self->lastMin < x ? self->lastMin : x;
    };
    // update memory for the next step
    self->lastMin = _out->out;
}

#include <stdio.h>
#include "mean.h"

void reset(memory* self) {
    self->first = 1;
    self->inputsTillNow = 0;
    self->meanVal = 0.0;
}

void step(int x, out* _out, memory* self) {
    if (self->first) {
        // output of first run is the input itself
        _out->out = x;
        // after first run make first 0 (false)
        self->first = 0;
        // increment mean with input
        self->meanVal += x;
    } else {
        _out->out = ((self->meanVal*self->inputsTillNow) + x)/(self->inputsTillNow+1);
    };
    // update memory for the next step
    self->meanVal = _out->out;
    self->inputsTillNow++;
}

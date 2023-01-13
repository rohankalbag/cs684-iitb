#include <stdio.h>
#include "var.h"

double sq(double x){
    return x*x;
}

void reset(memory* self) {
    self->first = 1;
    self->inputsTillNow = 0;
    self->meanVal = 0.0;
    self->varVal = 0.0;
}

void step(int x, out* _out, memory* self) {
    if (self->first) {
        // output variance of first run is zero
        _out->out_var = 0;
        _out->out_mean = x;
        // after first run make first 0 (false)
        self->first = 0;
        // increment mean with input
        self->meanVal += x;
    } else {
        // hold the current mean and variance
        _out->out_mean = ((self->meanVal*self->inputsTillNow) + x)/(self->inputsTillNow+1);
        _out->out_var = (((self->varVal + sq(self->meanVal))*self->inputsTillNow + sq(x))/(self->inputsTillNow+1)) - sq(_out->out_mean);
    };
    // update memory for the next step
    self->meanVal = _out->out_mean;
    self->varVal = _out->out_var;
    self->inputsTillNow++;
}

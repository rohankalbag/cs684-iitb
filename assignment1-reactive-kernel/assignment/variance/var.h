typedef struct memory {
    int first;
    int inputsTillNow;
    double meanVal;
    double varVal;
} memory;

typedef struct out {
    double out_var;
    double out_mean;
} out;

void reset(memory* self);

void step(int x, out* _out, memory* self);

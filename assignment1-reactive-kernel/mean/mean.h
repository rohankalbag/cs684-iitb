typedef struct memory {
    int first;
    int inputsTillNow;
    double meanVal;
} memory;

typedef struct out {
    double out;
} out;

void reset(memory* self);

void step(int x, out* _out, memory* self);

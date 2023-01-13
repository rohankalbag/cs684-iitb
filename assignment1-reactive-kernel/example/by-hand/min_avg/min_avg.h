typedef struct memory {
    int first;
    int lastMin;
} memory;

typedef struct out {
    int out;
} out;

void reset(memory* self);

void step(int x, int y, out* _out, memory* self);

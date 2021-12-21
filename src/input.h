#include "definitions.h"

#ifndef HAVE_INPUT
#define HAVE_INPUT

struct input
{
    int n_inputs;
    char* input_vals[MAX_ARGS + 7]
};

#endif
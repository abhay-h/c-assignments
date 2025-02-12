#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef HELPERS_H
#define HELPERS_H

typedef struct ArrWithSize_ {
    unsigned int *_arr;
    size_t arr_size;
} ArrWithSize;

bool is_armstrong(int);
bool is_prime(int);

ArrWithSize get_fibonacci_arr(int);

#endif
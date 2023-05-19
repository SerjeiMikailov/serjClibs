#include <stdio.h>
#include "serjlib.h"

// This file is part of "Beta" branch
// This branch is just used in "Beta" branch to make tests

int main() {
    float n = 543543.434;

    int rounded = roundNumber(n);

    printf("Result: %d", rounded);
}
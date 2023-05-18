#include "math.h"
#include <time.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

int randomNumber() {
    srand(time(NULL)); 
    int number = rand();
    return number;
}
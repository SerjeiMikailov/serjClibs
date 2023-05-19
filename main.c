#include <stdio.h>
#include "serjlib.h"

int main() {
    char str[] = "CARRO";

    toLowerCase(str);

    printf("Lower: %s\n", str);
}

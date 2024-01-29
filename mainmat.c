// mainmat.c
#include <stdio.h>
#include "mymat.h"

int main()
{
    int result_add = add(3, 5);
    int result_multiply = multiply(2, 4);

    printf("Addition: %d\n", result_add);
    printf("Multiplication: %d\n", result_multiply);

    return 0;
}

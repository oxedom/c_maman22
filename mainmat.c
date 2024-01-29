#include "mymat.h"
#include <stdio.h>

#define AMOUNT_OF_MAT 6
mat *mat_array[AMOUNT_OF_MAT];

int main()
{
    mat MAT[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        initialize_mat(MAT[i], 0);
    }

    print_mat(MAT[0]);

    return 0;
}

#include "mymat.h"
#include <stdio.h>
#include <string.h>

#define AMOUNT_OF_MAT 6
mat *mat_array[AMOUNT_OF_MAT];

void executeCommand(char *command)
{
    /*   One argument commands */
    if (strcmp(command, "printmat") == 0)
    {
        printf("command: %s\n", command);
    }
    /* Two argument commands*/

    /* Three argument commands*/
    else
    {
        printf("Unknown command: %s\n", command);
    }
}

int main()
{
    char input[256];
    mat MAT_A;
    mat MAT_B;
    mat MAT_C;
    mat MAT_D;
    mat MAT_E;
    mat MAT_F;
    mat_array[0] = &MAT_A;
    mat_array[1] = &MAT_B;
    mat_array[2] = &MAT_C;
    mat_array[3] = &MAT_D;
    mat_array[4] = &MAT_E;
    mat_array[5] = &MAT_F;
    int i;

    for (i = 0; i < 6; i++)
    {
        /*   initialize_mat(mat_array[i], 0); */
    }

    while (1)
    {
        if (scanf("%255s", input) != 1)
        {

            /*            // Clear the error and continue
                       clearerr(stdin);
                       continue; */
        }

        if (strcmp(input, "stop") == 0)
        {
            break;
        }

        executeCommand(input);
    }

    return 0;
}

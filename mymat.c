#include "mymat.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Print a matrix in the 2D format */
void print_mat(mat m1)
{
    int i;
    int j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.*f\t", 2, m1[i][j]);
        }
        printf("\n");
    }
}

/* Initialize all matrix entry's with a value */
void initialize_mat(mat m, int value)
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            m[i][j] = 0;
}

/* Add two matrixes togther and return a new matix*/
int **mat_add(int **m1, int **m2)
{
    int i;
    int j;
    int **m3 = malloc(4 * sizeof(unsigned int *));
    for (i = 0; i < 4; i++)
    {
        m3[i] = malloc(4 * sizeof(unsigned int));
        for (j = 0; j < 4; j++)
            m3[i][j] = m1[i][j] + m2[i][j];
    }
    return m3;
}

/* Substract two matrixes togther and return a new matrix pointer*/
int **sub_mat(int **m1, int **m2)
{
    int i;
    int j;
    int **m3 = malloc(4 * sizeof(unsigned int *));
    for (i = 0; i < 4; i++)
    {
        m3[i] = malloc(4 * sizeof(unsigned int));
        for (j = 0; j < 4; j++)
            m3[i][j] = m1[i][j] - m2[i][j];
    }
    return m3;
}

/* Multiply two matrixes togther and return a new matrix pointer*/
int **mul_mat(int **m1, int **m2)
{
    int i;
    int j;
    int k;
    int **m3 = malloc(4 * sizeof(unsigned int *));
    for (i = 0; i < 4; i++)
    {
        m3[i] = malloc(4 * sizeof(unsigned int));
        for (j = 0; j < 4; j++)
        {
            m3[i][j] = 0;
            for (k = 0; k < 4; k++)
            {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return m3;
}

/* Multiply two a matrix by a int (scalar) and return a new matrix pointer*/
int **mul_scalar(int **m1, int scalar)
{
    int i;
    int j;
    int **m3 = malloc(4 * sizeof(unsigned int *));
    for (i = 0; i < 4; i++)
    {
        m3[i] = malloc(4 * sizeof(unsigned int));
        for (j = 0; j < 4; j++)
        {
            m3[i][j] = m1[i][j] * scalar;
        }
    }
    return m3;
}

int **createMatrix(int **m1)
{
    int **m3 = malloc(4 * sizeof(unsigned int *));
    return m3;
}

/* Transpose a matrix and return a new matrix pointer*/
int **trans_mat(int **m1)
{
    int i;
    int j;
    int **m3 = malloc(4 * sizeof(unsigned int *));
    for (i = 0; i < 4; i++)
    {
        m3[i] = malloc(4 * sizeof(unsigned int));
        for (j = 0; j < 4; j++)
        {
            m3[i][j] = m1[j][i];
        }
    }
    return m3;
}

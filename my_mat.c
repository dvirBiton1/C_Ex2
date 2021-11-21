#include <stdio.h>
#include "my_mat.h"
#define N 10

void A(int mat[N][N])
{

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int B(int i, int j, int arr[N][N])
{
    if (arr[i][j] == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void C(int i, int j, int arr[N][N])
{

    if (B(i, j, arr) == 0)
    {
        printf("-1");
        printf("\n");
    }
    else
    {
        printf("%d", arr[i][j]);
        printf("\n");
    }
}

void printMat(int arr[N][N])
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int min(int x, int y)
{

    return (x > y) ? y : x;
}

void algorithm(int arr[N][N])
{

    for (size_t k = 0; k < N; k++)
    {
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                arr[i][j] = min(arr[i][j], (arr[i][k] + arr[k][j]));
            }
        }
    }
}

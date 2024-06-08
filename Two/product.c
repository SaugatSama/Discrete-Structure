#include <stdio.h>

void cartesian(int *arr1, int *arr2, int n, int o)
{

    int i, j;

    for (i = 0; i < n; ++i)
    {

        for (j = 0; j < o; ++j)
        {

            printf("%d x %d \t", arr1[i], arr2[j]);
        }
    }
}
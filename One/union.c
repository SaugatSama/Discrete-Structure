#include <stdio.h>
#include <stdlib.h>

void all(int *arr1, int *arr2, int n, int o)
{

    int total = n + o, i, j;

    int *all = (int *)(malloc(total * sizeof(int)));

    // Initializing the array to zero by Default.
    for (i = 0; i < total; ++i)
    {
        all[i] = 0;
    }

    // First Array Ko value deko yo ma chai:
    for (i = 0; i < n; ++i)
    {
        all[i] = arr1[i];
    }

    int second = n;

    for (i = 0; i < o; ++i)
    {
        all[second] = arr2[i];
        ++second;
    }

    for (i = 0; i < total; ++i)
    {
        printf("%d \t", all[i]);
    }

    printf("\n The difference of U and A is: \n");
    for (i = 0; i < total; ++i)
    {

        int flag = 0;

        for (j = 0; j < n; ++j)
        {

            if (all[i] == arr1[j])
            {
                ++flag;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d \t", all[i]);
        }
    }

    printf("\n The difference of U and B is: \n");
    for (i = 0; i < total; ++i)
    {

        int flag = 0;

        for (j = 0; j < o; ++j)
        {

            if (all[i] == arr2[j])
            {
                ++flag;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d \t", all[i]);
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

void intersection(int *arr1, int *arr2, int n, int o)
{

    int i, j, total = n + o;

    int *inter = (int *)malloc(total * sizeof(int));

    for (i = 0; i < total; ++i)
    {
        inter[i] = 0;
    }

    int k = 0;

    for (i = 0; i < n; ++i)
    {

        int flag = 0;

        for (j = 0; j < o; ++j)
        {

            if (arr1[i] == arr2[j])
            {

                flag++;
                break;
            }
        }

        if (flag > 0)
        {
            inter[k] = arr1[i];
            ++k;
        }
    }

    printf("The intersection of the set is: \n");

    for (i = 0; i < total; ++i)
    {
        if (inter[i] != 0)
        {

            printf("%d \t", inter[i]);
        }
    }


     

}
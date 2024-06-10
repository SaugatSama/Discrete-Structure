#include <stdio.h>

void all(int *arr1, int *arr2, int n, int o)
{

    int total = n + o;

    int *all = (int *)(malloc(total * sizeof(int)));

    int i, j;

    for (i = 0; i < n; ++i)
    {
        all[i] = arr1[i];
    }

    int cont = n;

    for (i = 0; i < o; ++i)
    {
        all[cont] = arr2[i];
        ++cont;
    }

    int cTotal = 0;

    for (i = 0; i < total; ++i)
    {
        for (j = i + 1; j < total; ++j)
        {

            if (all[i] == all[j])
            {
                ++cTotal;
                break;
            }
        }
    }

    int Etotal = total - cTotal;

    int *eAll = (int *)(malloc(Etotal * sizeof(int)));

    int rand = 0;

    for (i = 0; i < total; ++i)
    {

        int flag = 0;

        for (j = i + 1; j < total; ++j)
        {

            if (all[i] == all[j])
            {

                flag++;
                break;
            }
        }

        if (flag == 0)
        {
            eAll[rand] = all[i];
            ++rand;
        }
    }

    printf("The union of the array is:\n");

    for (i = 0; i < Etotal; ++i)
    {
        printf("%d \t", eAll[i]);
    }

    int interCount = 0;

    for (i = 0; i < n; ++i)
    {

        for (j = 0; j < o; ++j)
        {

            if (arr1[i] == arr2[j])
            {

                ++interCount;
                break;
            }
        }
    }

    int *inter = (int *)(malloc(interCount * sizeof(int)));

    int interC = 0;

    for (i = 0; i < n; ++i)
    {

        int flag = 0;

        for (j = 0; j < o; ++j)
        {

            if (arr1[i] == arr2[j])
            {

                ++flag;
                break;
            }
        }

        if (flag > 0)
        {
            inter[interC] = arr1[i];
            ++interC;
        }
    }

    printf("\n");
    printf("The intersection of the element is: \n");

    for (i = 0; i < interC; ++i)
    {
        printf("%d \t", inter[i]);
    }

    printf("\n");

    printf("The difference of Set A and Union of the set is: \n");

    for (i = 0; i < Etotal; ++i)
    {

        int flag = 0;

        for (j = 0; j < n; ++j)
        {

            if (eAll[i] == arr1[j])
            {

                ++flag;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d \t", eAll[i]);
        }
    }
    printf("\n");

    printf("The difference of Set B and Union of the set is: \n");

    for (i = 0; i < Etotal; ++i)
    {

        int flag = 0;

        for (j = 0; j < o; ++j)
        {

            if (eAll[i] == arr2[j])
            {

                ++flag;
                break;
            }
        }

        if (flag == 0)
        {
            printf("%d \t", eAll[i]);
        }
    }

    printf("\n");
    printf("The symmetric difference is: \n");

    for (i = 0; i < Etotal; ++i)
    {

        int flag = 0;

        for (j = 0; j < interC; ++j)
        {

            if (eAll[i] == inter[j])
            {
                ++flag;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d \t", eAll[i]);
        }
    }

    free(eAll);
    free(inter);
    free(all);
}
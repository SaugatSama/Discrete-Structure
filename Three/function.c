#include <stdio.h>

void ceiling(float n)
{

    int a = (int)n;

    float b = n - a;

    if (b < 0.5)
    {

        int c = (int)n;
        printf("%d \n", c);
    }
    else
    {
        int c = (int)n + 1;
        printf("%d \n", c);
    }
}

void floo(float n)
{

    int a = (int)n;

    printf("%d", a);
}
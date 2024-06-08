#include <stdio.h>
#include "function.c"

int main()
{

    float n;

    printf("Enter the number you want to calculate the ceiling and floor of.\n");

    scanf("%f", &n);

    printf("%.2f \n", n);

    ceiling(n);

    floo(n);

    return 0;
}
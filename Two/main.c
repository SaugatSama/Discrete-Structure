#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "product.c"

int main()
{

    int n, o, i;

    printf("Enter the number of elements you want to store in the first array.\n");
    scanf("%d", &n);

    int *arr1 = (int *)(malloc(n * sizeof(int)));

    printf("Enter the elements for the first array.\n");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements you want to store in the second array.\n");
    scanf("%d", &o);

    int *arr2 = (int *)(malloc(n * sizeof(int)));

    printf("Enter the elements for the second array.\n");

    for (i = 0; i < o; ++i)
    {
        scanf("%d", &arr2[i]);
    }

    cartesian(arr1, arr2, n, o);

    return 0;
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "all.c"

int main()
{

    int i, n, o;

    printf("Enter the number of elements you want to store in set A.\n");
    scanf("%d", &n);

    int *arr1 = (int *)(malloc(n * sizeof(int)));

    printf("Enter the total elements for set A.\n");

    for (i = 0; i < n; ++i)
    {

        scanf("%d", &arr1[i]);
    }

    printf("Enter how many numbers you want to store in set B.\n");
    scanf("%d", &o);

    int *arr2 = (int *)(malloc(o * sizeof(int)));

    printf("Enter the elements of set B.\n");

    for (i = 0; i < o; ++i)
    {

        scanf("%d", &arr2[i]);
    }


    all(arr1, arr2, n, o);

    return 0;
}
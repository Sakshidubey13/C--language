// Q.3 Write a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter Size of Array :");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter b[%d]:", i);
        scanf("%d", &b[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("Array C is :%d", c[i]);
        printf("\n");
    }
    return 0;
}
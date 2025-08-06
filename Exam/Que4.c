#include<stdio.h>

void main()
{
    //write a c pogram that uses pointer to find the sum of two 1 D arrays.

    int n, i;

    printf("Enter the size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] =  ", i);
        scanf("%d", (a + i));
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (b + i));
    }

    for (i = 0; i < n; i++)
    {
        *(sum + i) = *(a + i) + *(b + i);
    }

    printf("Sum of the arrays:\n");
    for (i = 0; i < n; i++)
    {
        printf("sum[%d] = %d\n", i, *(sum + i));
    }
}

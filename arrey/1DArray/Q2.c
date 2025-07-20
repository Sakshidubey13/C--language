// Q.2 Write a Program to find the average of a 1D array.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    float avg;

    printf("Enter Size of Array :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    avg = sum / n;
    printf("Average of Array %.2f", avg);
}
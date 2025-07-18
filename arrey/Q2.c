#include <stdio.h>
#include <conio.h>

int main()
{
    // Q.2 Write a Program to find the average of a 1D array.

    int i, n, sum = 0;
    float avg;

    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum + a[i];
    printf("Average of Array %.2f", avg);
}
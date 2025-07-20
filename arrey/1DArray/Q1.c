// Q.1 Write a Program to find the length of a 1D array.

#include <stdio.h>

int main()
{
    int i, n, length;

    printf("Enter Size of Array :");
    scanf("%d", &n);
    length = n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("Length of Array : %d", length);
    
    return 0;
}
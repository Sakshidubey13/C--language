#include <stdio.h>
#include<conio.h>

void main()
{
    // WAP to print only even(divide by 2) numbers from an array

    int i, n , sum=0;

    printf("Enter Size of Array : ");
    scanf("%d", &n);

    int a[n]; // Declare array of size n

    
    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0) // Correct condition
        {
            printf("%d ", a[i]);
        }
    }

    
}

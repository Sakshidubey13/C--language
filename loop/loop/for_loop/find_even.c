#include <stdio.h>
#include <conio.h>
// print all the even numbers from 1 to 100.

void main()
{
    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
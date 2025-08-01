#include <stdio.h>
#include <conio.h>
// print all number is odd..
void main()
{
    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
}
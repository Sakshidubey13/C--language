#include <stdio.h>
#include <conio.h>

void main()
{
    // 6. Develop a program that prints the given Custom numeric pattern using a nested for loop

    // 1                 1
    // 1 2             2 1
    // 1 2 3         3 2 1
    // 1 2 3 4     4 3 2 1
    // 1 2 3 4 5 5 4 3 2 1

    int i, j, k, l;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (l = 5; l > i; l--)
        {
           printf("    ");
        }
         for (k = i; k >= 1; k--)
            {
                printf("%d ", k);
            }
            printf("\n");
    }
}
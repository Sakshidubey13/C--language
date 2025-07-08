// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

#include <stdio.h>
void main()
{
    int i, j, k, l;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (l = i; l <5; l++)
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
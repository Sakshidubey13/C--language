#include <stdio.h>
// Que 2 Largest Element in 2D Array..

void main()
{
    int r, c, i, j;

    printf("Enter row of Array : ");
    scanf("%d", &r);

    printf("Enter coloum of Array : ");
    scanf("%d", &c);

    int a[r][c];

    int max = a[0][0];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
        printf("\n");
    }
    printf(" The Largest Element : %d", max);
}
#include <stdio.h>

// Que 3 Transpose of 2D array

void main()
{
    int r, c, i, j;

    printf("Enter the Array's row  size : ");
    scanf("%d", &r);

    printf("Enter the Array's  column size : ");
    scanf("%d", &c);

    int a[r][c];
    int transpose[c][r];

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
        for (j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
              printf("The transpose matrix of an array : ");
        }
       
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }
}
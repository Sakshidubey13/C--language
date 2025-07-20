// 2D Array with User Input Example.

#include <stdio.h>

void main()
{
    int i, j, r=2, c=3;
    int a[2][3];

    printf("Enter Elements of 2D Array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter Elements at a[%d][%d]::", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#include<conio.h>

//         *
//       *   *
//     *       *
//   *           *
// *               *
//   *           *
//     *       *
//       *   *
//         *


void main()
{
    int i, j, count = 0;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((i == 1 || i == 9) && j == 5)
            {
                printf("* ");
            }
            else if ((i == 2 || i == 8) && (j == 4 || j == 6))
            {
                printf("* ");
            }
            else if ((i == 3 || i == 7) && (j == 3 || j == 7))
            {
                printf("* ");
            }
            else if ((i == 4 || i == 6) && (j == 2 || j == 8))
            {
                printf("* ");
            }
            else if (i == 5 && (j == 1 || j == 9))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

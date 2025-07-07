#include <stdio.h>
#include <conio.h>

void main()
{
    //       1
    //     1 2
    //   1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    int i, j, k;// declaration variable

    for (i = 1; i <= 5; i++)// output rows
    {
        for (k = i; k <= 4; k++)
        {
            printf("  ");// Need one more loop to print space
        }
        for (j = 1; j <= i; j++)//inner coloum
        {
            printf("%d ", j);//print the valuer j 
        }
        printf("\n");// to get new line after each line
    }
}
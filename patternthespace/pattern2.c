#include <stdio.h>
#include <conio.h>

void main()
{
    //        1
    //      2 1
    //    3 2 1
    //  4 3 2 1
    // 5 4 3 2 1

    int i, j, k;//declaration variable

    for (i = 1; i <= 5; i++)//output rows
    {
        for (k = i; k <= 4; k++)
        {
            printf("  ");// Need one more loop to print space
        }
        for (j = i; j >= 1; j--)// input coloum
        {
            printf("%d ", j);//print the value j
        }
        printf("\n");// to get new line after each line
    }
}
#include <stdio.h>
#include <conio.h>

void main()
{

    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4
    // 5 5 5 5 5

    int i, j, k; // declare variable

    for (i = 1; i <= 5; i++) // output row
    {
        for (k = i; k <= 4; k++)
        {
            printf("  "); // Need one more loop to print space
        }
        for (j = 1; j <= i; j++) // inner coloum
        {
            printf("%d ", i); // print the value i
        }
        printf("\n"); // to get new line after each line
    }
}
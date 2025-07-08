#include <stdio.h>
#include <conio.h>

void main()
{
    //         5
    //       5 4
    //     5 4 3
    //   5 4 3 2
    // 5 4 3 2 1

    int i, j, k; // declration variable

    for (i = 5; i >= 1; i--) // output rows
    {
        for (k = 1; k <= i; k++)
        {
            printf("  "); // Need one more loop to print space
        }
        for (j = 5; j >= i; j--) // inner coloum
        {
            printf("%d ", j); // print the value j
        }

        printf("\n"); // to geyt new line after each line
    }
}
#include <stdio.h>
#include <conio.h>

void main()
{
    //         5
    //       4 5
    //     3 4 5
    //   2 3 4 5
    // 1 2 3 4 5

    int i, j, k; // Declareation variable

    for (i = 5; i >= 1; i--) // output raws
    {
        for (k = 1; k <= i; k++)
        {
            printf("  "); // Need one more loop to print space
        }
        for (j = i; j <= 5; j++) // inner coloum
        {
            printf("%d ", j); // print value j
        }
        printf("\n"); // to get new line after each line
    }
}
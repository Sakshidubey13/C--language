#include <stdio.h>
#include <conio.h>

void main()
{

    //  1 1 1 1 1
    // 2 2 2 2
    // 3 3 3
    // 4 4
    // 5

    int i, j;//declare variables
    for (i = 1; i <= 5; i++)// outer loop for rows
    {
        for (j = 1; j <= 5 - i + 1; j++)// inner loop for columns
        {
            printf("%d ", i);//print value of i
        }
        printf("\n");
    }
}
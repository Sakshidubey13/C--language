#include <stdio.h>
#include <conio.h>

void main()
{
    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1
    int i, j;// declare variables 
    for (i = 5; i >= 1; i--)//outer loop for rows
    {
        for (j = 1; j <= i; j++)//inner loop for columns
        {
            printf("%d ", i);//print value of i
        }
        printf("\n");// to get new line
    }
}
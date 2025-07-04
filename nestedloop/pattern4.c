#include <stdio.h>
#include <conio.h>
void main()
{
    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1

    int i, j;// declare variables 
    for (i = 5; i >= 1; i--)// outer  rows
    {
        for (j = 5; j >= i; j--)// inner columns
        {
            printf("%d ", j);// print the value of j
        }
        printf("\n");// print new line 
    }
}
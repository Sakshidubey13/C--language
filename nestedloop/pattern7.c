#include<stdio.h>
#include<conio.h>

void main ()
{
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1

    int i, j; // declare variables

    for (i = 5; i >= 1; i--)// outer loop for rows
    {
        for (j = 1; j <= i; j++)//inner loop for columns
        {
            printf("%d ", j);// print the value of j
        }
        printf("\n");// print new line 
    }
}
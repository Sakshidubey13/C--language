#include <stdio.h>
#include <conio.h>
void main ()
{
    // 5
    // 4 4
    // 3 3 3
    // 2 2 2 2
    // 1 1 1 1 1

    int i, j;//declaration of variables 

    for (i = 5; i >= 1; i--)// outer  rows
    {
        for (j = 5; j >= i; j--)// inner columns
        {
            printf("%d ", i);// print the value of i
        }
        printf("\n");// print new line
    }

   
}
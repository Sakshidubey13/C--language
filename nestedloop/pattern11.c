#include <stdio.h>
#include <conio.h>
void main()
{
    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    int i, j; // declare variables

    for (i = 5; i >= 1; i--) // outer loop for rows
    {
        for (j = i; j >= 1; j--) // inner loop for columns
        {
            printf("%d ", j); // print  value of j
        }
        printf("\n"); // print new line 
    }
}
#include <stdio.h>
#include <conio.h>
void main()
{
    // A
    // A B
    // A B C
    // A B C D
    // A B C D E

    char i, j;          // declare variables        
    for (i = 'A'; i <= 'E'; i++) // outer loop for rows
    {
        for (j = 'A'; j <= i; j++) // inner loop for columns
        {
            printf("%c ", j); // print alphabet
        }
        printf("\n"); // to get new line
    }
}
#include <stdio.h>
#include <conio.h>

void main()
{
    // 2. Develop a program that prints the given Floyd's traingle pattern using a nested for loop

    // 11
    // 12 13
    // 14 15 16
    // 17 18 19 20

    int i, j;       // declarre variable
    int count = 11; // starting number

    for (i = 1; i <= 4; i++) // outer loop for row
    {
        for (j = 1; j <= i; j++) // inner loop for coloum
        {
            printf("%d ", count); // print out count value
            count++;              // ex. count = count + 1
        }
        printf("\n"); // to get new line
    }
}
// Wap to find min. no. from given 2 no. using if else.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int a, b; // Declared two integer variable

    printf("Enter a number A: "); // Input message for A
    scanf("%d", &a);              // User input to a

    printf("Enter a number B: "); // Input message for B
    scanf("%d", &b);              // User input to b

    if (a < b) // Block will executed only when condition is true
    {
        printf("\nA is Small"); // to print if statement
    }
    else // Block will executed when condition is false
    {
        printf("B is Small"); // to print else statement
    }
}
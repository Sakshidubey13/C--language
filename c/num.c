// WAP TO CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING NESTED IF ELSE.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int num; // Declared integer variable

    printf("Enter Number :"); // Input message for Number
    scanf("%d", &num);        // User input to Number

    if (num > 0) // Block will executed only when condition is true(Positive)
    {
        printf("Number is Positive"); // to print number
    }
    else // Block will executed when if condition is false
    {
        if (num < 0) // Block will executed only when condition is true(Negative)
        {
            printf("Number is Negative"); // to print number
        }
        else // Block will executed when nested if condition is false
        {
            printf("Number is Neutral"); // to print number
        }
    }
}
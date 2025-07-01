// WAP TO CHECK USER IS ELIGIBLE FOR VOTE OR NOT.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int age; // Declared integer variable

    printf("Enter Your Age:"); // Input message for Age
    scanf("%d", &age);         // User input to Age

    if (age >= 18) // Block will execute only when condition is true
    {
        // Age: 18/18+
        printf("You are Eligible for Vote !");
    }
    else // Block will executed when if condition is false
    {
        if (age >= 1) // Block will execute only when age is positive number
        {
            printf("You are not Eligible for Vote !");
        }
        else // Block will executed when age is negative number
        {
            printf("Please Enter Valid Age");
        }
    }
}
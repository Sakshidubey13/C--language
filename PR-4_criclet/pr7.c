#include <stdio.h>
#include <conio.h>

void main()
{
    // Develop a pogram that prints the given Custom alphabetic pattern using a nested for loop

    //* * * * *
    //*       *
    //* * * * *
    //*
    //*

    int i, j; // declaration variable
    for (i = 1; i <= 5; i++) // outer row explain
    {
        for (j = 1; j <= 5; j++) // inner coloum explain
        {
            if (i == 1 || i == 3 || j == 1)
            {
                printf("* "); // pint output *
            }
            else if ((i == 2) && j == 5)
            {
                printf("* "); // prinit output * .
            }
            else
            {
                printf("  ");//print out space
            }
        }
        printf("\n");//to get new line 
    }
}
// WAP to Find max. from given 4 no. using nested if else.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int a, b, c, d; // Declared four integer variable

    printf("Enter A: "); // Input message for A
    scanf("%d", &a);     // User input to a

    printf("Enter B: "); // Input message for B
    scanf("%d", &b);     // User input to b

    printf("Enter C: "); // Input message for C
    scanf("%d", &c);     // User input to c

    printf("Enter D: "); // Input message for D
    scanf("%d", &d);     // User input to d

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is Max");
            }
            else
            {
                printf("D is Max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is Max");
            }
            else
            {
                printf("D is Max");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("B is Max");
            }
            else
            {
                printf("D is Max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("C is Max");
            }
            else
            {
                printf("D is Max");
            }
        }
    }
}
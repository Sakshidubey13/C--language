// WAP to Find min. from given 3 no. using nested if else.

#include <stdio.h> //Standard input output header file.
#include <conio.h> //Console input output header file.

void main()
{
    int a, b, c; // Declared three integer variable

    printf("Enter A: "); // Input message for A
    scanf("%d", &a);     // User input to a

    printf("Enter B: "); // Input message for B
    scanf("%d", &b);     // User input to b

    printf("Enter C: "); // Input message for C
    scanf("%d", &c);     // User input to c

    if (a < b)
    {
        if (a < c)
        {
            printf("A is Min");
        }
        else
        {
            printf("C is Min");
        }
    }
    else
    {
        if (b < c)
        {
            printf("B is Min");
        }
        else
        {
            printf("C is Min");
        }
    }
}

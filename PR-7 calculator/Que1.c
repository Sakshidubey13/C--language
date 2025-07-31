// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +,-,*,/, and % using UDF ,
// switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}

void main()
{
    int a, b, ans, choice;

    while (1)
    {
        printf("\n");
        printf("==== Calculator  Menu ====");
        printf("\n\nPress 1 for + ");
        printf("\nPress 2 for - ");
        printf("\nPress 3 for * ");
        printf("\nPress 4 for / ");
        printf("\nPress 5 for %% ");
        printf("\nPress 0 for Exit");

        printf("\nEnter Your Choice:");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("You are Exit From Calculator.\n");
            break;
        }

        printf("Enter A :");
        scanf("%d", &a);
        printf("Enter B :");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            ans = sum(a, b);
            printf("\nAddition of a + b = %d", ans);
            break;
        case 2:
            ans = sub(a, b);
            printf("\nSubtraction of a - b = %d", ans);
            break;
        case 3:
            ans = mul(a, b);
            printf("\nMultiplication of a * b = %d", ans);
            break;
        case 4:
            ans = div(a, b);
            printf("\nDivision of a / b = %d", ans);
            break;
        case 5:
            ans = mod(a, b);
            printf("\nModulo of a mod b = %d", ans);
            break;

        default:
            printf("\nInvalid Choice !");
            break;
        }
    }
}
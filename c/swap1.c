// wap to swap value of two variable (without using third variable).

#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y; // Declared two integer variables

    printf("Enter a number X: "); // Input message for X
    scanf("%d", &x);              // User input to x

    printf("Enter a number Y: "); // Input message for Y
    scanf("%d", &y);              // User input to y

    x = x + y; // ex.x= 10+50 =60
    y = x - y; // y= 60-50 =10
    x = x - y; // x= 60-10= 50

    printf("\nX= %d\n", x); // to print value of variable x ex.x=50
    printf("Y= %d", y);     // to print value of variable y ex.y=10
}
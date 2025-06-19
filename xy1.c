#include<stdio.h>
#include<conio.h>

int main() 
{
    int x, y, result;

   
    printf("Enter value of x: "); // Input values x
    scanf("%d", &x);//user input the x variable

    printf("Enter value of y: ");//input values y
    scanf("%d", &y);//user input the y variable

    // Calculate (x + y)2
    result = (x * x) + (y * y) + (2 * x * y);

    // Output the result
    printf("Result of (x + y)2 = %d\n", result);

    return 0;
}
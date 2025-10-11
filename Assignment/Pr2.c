// Q2. C Program to Check Whether a Number is Even or Odd

#include <stdio.h>

int main()
{
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is even or odd
    if (num % 2 == 0)
        printf("%d is an Even number.\n", num);
    else
        printf("%d is an Odd number.\n", num);

    return 0;
}


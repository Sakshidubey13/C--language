#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    int firstDigit;
    int lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num;

    while (firstDigit >= 10)
     {
        firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit = %d\n", sum);
}

#include <stdio.h>
#include <conio.h>

// Q.2 Write a Program to check if a given number is divisible by both 3 and 5 or not by using a UDF.
void div(int n)
{
    if (n % 3 == 0 &&n % 5 == 0)
    {
        printf("The Number is divisable by both 3 & 5 .");
    }
    else if (n % 3 == 0)
    {
        printf("The number is divisable by 5.");
    }
    else if (n % 5 == 0)
        {
            printf("The number is divisable by 5.");
        }
}

void main()
{
    int n;

    printf("Enter any Number : ");
    scanf("%d", &n);

    div(n);
}

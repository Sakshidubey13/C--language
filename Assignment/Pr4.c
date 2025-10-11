// Q4. C Program to Check Leap Year

#include <stdio.h>

int main()
{
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year.\n", year);
    else
        printf("%d is Not a Leap Year.\n", year);

    return 0;
}


#include<stdio.h>

void main()
{
    //wap to find leap year from 2000 to 3000 using while loop.
    int year = 2000;

    printf("Leap years from 2000 to 3000:\n");

    //increment condition.
    
    while (year <= 3000)
     {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            printf("%d\n", year);
        }
        year++;
    }
}
#include <stdio.h>
#include <conio.h>

void main()
{
    // Digit counter - Develop a program to count the total number of digits in a number.

    int num, n;
    int last_digigt = num % 10;
    int first_digigt = 0;// decration variables

    printf("Enter any number : ");//input massge for number
    scanf("%d", &n);// user input any number 

    num = n;
    last_digigt = n % 10;//get last digit of number
                        // example :- 124 last digit is 4

    while (num >= 10) // find first digit using a loop 
                     //ex. 123->12->1(find first digit using a loop condition)
    {               
        num /= 10;// remove last digit
    }
    first_digigt = num;

    printf(" The Sum of the fist and the last digit : ");// print out
   
    printf("%d + %d = %d\n ", first_digigt, last_digigt, first_digigt + last_digigt);// calculate
}
#include<stdio.h>
#include<conio.h>

/*Write a c program that prompts the user
 to enter to enter a 3 digit's positive integer.*/

void main()
{
    
    int num,first,last,sum;

    printf("Enter a positive number : ");
    scanf("%d", &num);

    last = num%10;
    first=num/100;
    sum = first +last;

    printf("Sum of first and last digit : %d\n",sum);
    
}
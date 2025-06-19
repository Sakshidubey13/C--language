#include<stdio.h>
#include<conio.h>

int main() 
{
    int number;

    printf("Enter a number: ");//to print value of number
    scanf("%d", &number);//user input the any number.

    if (number > 0)
     {
        printf("The number is positive.\n");//to print the positive number.
    } else if (number < 0) 
	{
        printf("The number is negative.\n");//to print the negative number.
    } else
     {
        printf("The number is neutral (zero).\n");//to print the netural number.
    }

    return 0;
}


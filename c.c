#include<stdio.h>
#include<conio.h>
int main() 
{
    int a, b;

    printf("Enter first number: ");//To print value of variable a.
    scanf("%d", &a);//user input the first number
    
    printf("Enter second number: ");//To print value of variable b.
    scanf("%d", &b);//user input the second number

    // Compare using if else
    if (a < b) //block will execute only when condition is true.
	{
        printf("Minimum number is: %d\n", a);//to print value of minimum number a.
    } else 
	{
        printf("Minimum number is: %d\n", b);//To print value of minimum number b.
    }

    return 0;
}
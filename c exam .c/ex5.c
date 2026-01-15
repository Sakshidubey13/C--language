#include<stdio.h>
#inclide<conio.h>
void main()
{
         //5. Write C program to calculate factorial of a number.

    int n, i = 1;
   int  fact = 1;

    printf("Enter a number factorial : ");
    scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;

    }while(i <= n);

    printf("factorial is : %d", fact);
}

#include <stdio.h>
#include <conio.h>

// wap to print 1 to n using function.ex.. 1 2 3 4 5 .......


void num(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
void main()
{
    int n;

    printf("Enter Number : ");//user input any number 
    scanf("%d ", &n);//user n

    num(n);//as go for return void sum
    
}

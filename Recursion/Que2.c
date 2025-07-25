#include<stdio.h>
#include<conio.h>

// Write a program to print reverse number using recursion..

int reverse(int i, int n)
{
    printf("%d\n ",i);
    i--;

    if(i>=n)
    {
       reverse(i,n);
    }
}

void main()
{
    reverse(100,1);
}
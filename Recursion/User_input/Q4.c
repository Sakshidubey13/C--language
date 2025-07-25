#include<stdio.h>
#include<conio.h>
   // write a pogram to find factorial of n from user input using recursion.

   int factorial(int n)
   {
    if(n==1 || n==0)
    return 1;
    int recAns = n*factorial(n-1);
    return recAns;
   }
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int fact = factorial(n);
    printf("%d ", fact);
}
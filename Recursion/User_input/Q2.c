#include<stdio.h>
#include<conio.h>

// Write a program to print reverse number using recursion for user input..
void reverse(int n)
{
    if(n==0)
    return ;

    printf("%d\n",n);
    reverse(n-1);
    return 0;

}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    reverse(n);

    return 0;
}

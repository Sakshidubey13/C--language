#include<stdio.h>
#include<conio.h>

// Write a program to print reverse number using recursion for user input..
void increasing(int i,int n)
{
    if(i>n)
      return ;

    printf("%d\n",i);
   increasing(i+1,n);
    return ;

}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    increasing(1,n);

    return 0;
}

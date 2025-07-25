#include<stdio.h>
#include<conio.h>
// Topic -> Recursion
// Recursion means when a function call it self..

//Q1 -> Wap to print 1 to n using recurison..

void printf1toN(int i, int n)
{
    printf("%d \t",i);
    i++;
    
    if(i<=n)
    {
        printf1toN(i,n);//re call function
    }

}

  void main()
  {
    printf1toN(1,100); //call function  (100 work for n ..)
  }
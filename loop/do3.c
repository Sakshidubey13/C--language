#include<stdio.h>

void main()
{

    //wap to print 1 to N using DO WHILE LOOP.

     int i=1,n;

    printf("Enter N:");//user input the value of n.
    scanf("%d",&n);//user input

   do
    {
        printf("%d\n",i); //print i
        i++; //i=i+1
    } while (i<=n); //Created while loop, loop will end when i bacome less than n..

}

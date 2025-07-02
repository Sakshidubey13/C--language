#include<stdio.h>

void main()

{
   // 3. Write C program to fins maximum from 3 number using nested if else.
int a;
int b;
int  c; 


printf("Enter a number A = ");
scanf("%d", &a);

printf("Enter a number B = ");
scanf("%d", &b);

printf("Enter a number C = ");
scanf("%d", &c);



if(a > b) 
{
    if(a > c)
      {
        printf("A is maximum !");
      }
    else
    {
        printf("C is maximum ");
        } 
      
} 
else 
{

    if(b > c)
      { 
        printf("B is maximum !");
    }
    else
     {
        printf("c is maximum !");
    }

}
}
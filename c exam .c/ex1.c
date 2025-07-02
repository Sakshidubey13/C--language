#include<stdio.h>

void main()
{
   //Write C program to check number is negative, postivie & neutral using ladder if else

   int n;

   printf("Enter a number = ");
   scanf("%d", &n);


   if(n > 0)
   {
           printf("The number is positive!");
   }
   else
   {
           if (n < 0)
           {
               printf("The number is negative !");
           }
           else
           {
            printf("The number is neutral !");
           }
   }

}
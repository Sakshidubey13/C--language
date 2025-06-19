#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	
	printf("Enter A number : ");//input the a variable
	scanf("%d", &a);//user input the first number
	
	printf("Enter B number : ");//input the b variable
	scanf("%d", &b);//user input the second num
	
	printf("Enter C number : ");//input the c variable
	scanf("%d", &c);//user input the third num.
	
	printf("Enter D number : ");//input the d variable
	scanf("%d", &d);// user input the fourth num.
	
 
    if (a > b) // First compare a and b
	{
        if (a > c) //compare b and c
		{
            if (a > d) // Compare a and d
		    {
                printf("A is max ! ");//print out
            }
			 else 
			{
                printf("D is max ! ");//print out
            }
        }
		 else
	    {
            if (c > d)  // Compare c and d
			{
              printf("C is max ! ");//print out
            } 
			else 
			{
            	printf("D is max ! ");//print out
            }
        }
    }
	 else
	{
        if (b > c)//compare b and c
	    {
            if (b > d)   // Compare b and d
			{
                printf("B is max ! ");//print out
            } else 
			{
               printf("D is max ! "); //print out
            }
        }
		 else 
		{
            
            if (c > d) // Compare c and d
			{
               printf("D is max ! "); //print out
            }
			 else
		    {
                 printf("D is max ! "); //print out
            }
        }
    }

   
    return 0;
}
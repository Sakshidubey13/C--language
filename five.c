#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("Enter A number : ");//input the first variable
	scanf("%d", &a);//user input the a number
	
	printf("Enter B number : ");//input the second variable
	scanf("%d", &b);//user input the b number
	
	printf("Enter c number : ");//input the third variable
	scanf("%d", &c);//user input the c number
	
	printf("Enter D number : ");//input the fourth variable
	scanf("%d", &d);//user input the d number
	
	printf("Enter E number : ");//input the fifth variable
	scanf("%d", &e);//user input the e number
	
	
   
    if (a > b) // First compare a and b
	 {
        if (a > c) // compare a and c
		 {
          
            if (a > d)   // Compare a and d
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
            
            if (c > d)   // Compare c and d
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
        if (b > c)// Now compare b and c
		 {
           
            if (b > d) // Compare b and d
			 {
                printf("B is max ! ");//print out
            } 
			else
			 {	
                printf("D is max ! ");//print out
            }
        } 
		else
		 {
            
            if (c > d)// Compare c and d
			 {
                 printf("C is max ! ");//print out
            } 
			else
			 {
                 printf("D is max ! ");//print out
            }
        }
    }

  
    return 0;
	
}
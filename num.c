#include<stdio.h>
#include<conio.h>

int main()
 {
 	//  CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING NESTED IF ELSE.
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);//user input the number

   
    if (a >= 0)
	 {
        if (a == 0)
		 {
            printf("The number is NEUTRAL.\n");//print output
        } 
		else 
		{
            printf("The number is POSITIVE.\n");//print output
        }
    } 
    	else 
       	{
        printf("The number is NEGATIVE.\n");//print output
        }

    return 0;
}
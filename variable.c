#include<stdio.h>
#include<conio.h>
int main()
{
	
    int a, b, c;

    printf("Enter A number: ");//input massge for a
    scanf("%d", &a);//user input the a variable

    printf("Enter B number: ");//input massge for b
    scanf("%d", &b);//user input the b variable

    printf("Enter C number: ");//input massge for c 
    scanf("%d", &c);//user input the c variable

    if (a > b) 
	{
        if (a > c)
		{
                printf("A is maximum ! ");
        } 
		else
	    {
                printf("B is maximum ! ");
        }
    } else 
	{
        if (b > c) 
		{
             printf("B is maximum ! ");
        } 
		else 
		{
             printf("C is maximum ! "); 
        }
    }

  

    return 0;
}
	
	

#include<stdio.h>

void main()
{
    // wap to print even no. from N to 1 using for_WHILE loop.
    int n,i = 1;

     printf("Enter the value of N: ");//Take input from user
    scanf("%d", &n);

     for(i = n; i >= 1; i--)// Start from N, run till i >= 1, decrease i by 1 in each loop
    {
    	if(i % 2 ==0) //This checks if i is even (divisible by 2)
    	{
    		printf("%d\n",i);
		}
	}
	return 0;//Program ends 
}

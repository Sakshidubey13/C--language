#include<stdio.h>

void main()
{
	//wap to print odd no. from 1 to N using for loop.

	 int i = 1, n;
	 
	 printf("Enter the number N = ");//user input the value n
	 scanf("%d", &n);//user input
	 
	 for (i = 1; i <= n; i++)//Starts from i = 1
	                        // Continues until i becomes greater than N
                           // Increments i by 1 on every iteration
	 {
	 	if (i % 2 == 1)
	 	{
	 		printf("%d\n", i);//output the result
		 } 
	 }
}

#include <stdio.h> //Standard input output header file

void main()
{
    //wap to calculate the factorial of n. using for_while loop.
    int i = 1, n;
    int fact = 1;

    printf("Enter a number Factorial: ");//user input the value
    scanf("%d", &n);//user input
    
    for (i = 1; i <= n; i++)  //Start: We are starting with i = 1. First value of i is 1.
                             //Condition: Keep running the loop as long as i is less than or equal to N. This means loop will stop after reaching N.
                            //ncrement: After every loop round, increase the value of i

    
    
    
    {
    	fact = fact * i;//	It updates fact with the new multiplied result.

	}
	
	printf("Factorial is = %d",fact); //final result
}

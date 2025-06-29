#include <stdio.h> 

void main()
{
    // WAP to print sum 1 to N using for_loop.

    int n;
    int i = 1, sum = 0;

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

for (i = 1;i <= n; i++)//Start: We are starting with i = 1. First value of i is 1.
                     //Condition: Keep running the loop as long as i is less than or equal to N. This means loop will stop after reaching N.
                    //ncrement: After every loop round, increase the value of i

{
	sum = sum + i;
}
   printf("Sum is = %d",sum);
   
   return 0;
}

#include <stdio.h> //Standard input output header file

void main()
{
    //wap to print the multipication table of n using for loop.1
    int n, i = 1;

    printf("Enter Number Which you want to Table :");
    scanf("%d", &n);
    
    for ( i = 1; i <= 10; i++)//Start the loop with i = 1. (First value of i is 1.)
                        //i <= 10	Condition: Run the loop as long as i is less than or equal to 10.
                       // loop will run from i = 1 to i = 10.
                      //	Increment: After every loop round, increase i by 1.i = i+1 = 1

    
    
    
    
    printf("%d*%d = %d\n", n, i, n * i);
    
}

#include <stdio.h>

void main()
{
    // wap to print sum 1 to N using while loop.
    int n;
    int i = 1, sum = 0;

    printf("Enter a number N = "); // input variable
    scanf("%d", &n);               // user input the value

    while (i <= n) // check condition
    {
        sum = sum + i; // sum = 0+1 = 1
        i++;
    }

    //output the result
    printf("Sum is %d", sum);
}
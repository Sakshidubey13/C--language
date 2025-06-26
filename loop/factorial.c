#include <stdio.h>

void main()
{
    // wap to calculate factorial using while loop.
    int n;
    int i = 1, fact = 1;

    printf("Enter a number N = "); // input variable
    scanf("%d", &n);               // user input the value

    while (i <= n) // check condition
    {
       fact = fact * i; // sum = 1-1 = 0
        i++;
    }

    // output the result
    printf("Factorial is %d", fact); // may be 5*4*3*2*1 = 120
}
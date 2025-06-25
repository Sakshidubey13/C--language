#include <stdio.h>

void main()
{
    // wap to print 1 to n number using while loop.
    int n;
    int i = 1;

    printf("Enter the value of n: "); 
    scanf("%d", &n);   // USER input the variable

    // increment(condition <).

    while (i <= n)
    {
        printf("%d\n", i); // output result
        i++;
    }
}
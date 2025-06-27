#include <stdio.h> 

void main()
{
    // WAP to print sum 1 to N using do_while loop.

    int n;
    int i = 1, sum = 0;

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);//Created while loop, loop will end when i bacome less than n..

    printf("Sum is =%d", sum); // print sum
}
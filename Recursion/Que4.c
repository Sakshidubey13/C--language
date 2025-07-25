#include <stdio.h>
#include <conio.h>

// Write a pogram to find factorial of n using recursion.

int factorial(int i, int n)
{

    if (i == n)
        return n;

    return i * factorial(i + 1, n);
}

void main()
{
    int result;

    result = factorial(1, 5);

    printf("Factorial is %d \n", result);
}

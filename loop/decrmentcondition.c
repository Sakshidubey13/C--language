#include <stdio.h>

void main()
{
    int N;

    // wap to print N to 10 using while loop.

    printf("Enter the starting number (N): "); // Input from user
    scanf("%d", &N);                           // user input

    // Decrement condition.
    while (N >= 10)
    {
        printf("%d\n", N);//output the result
        N--;
    }
}
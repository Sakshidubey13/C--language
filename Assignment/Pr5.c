// Q5. C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (i = 1; i <= n; ++i)
    {
        sum += i; // sum = sum + i
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}


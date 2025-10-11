// Q1. C Program to Swap Two Numbers

#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input two numbers from user
    printf("Enter first  numbers: ");
    scanf("%d", &a);
    
    
     printf("Enter second numbers: ");
    scanf("%d", &b);

    // Swapping logic (without using temp)
    a = a * b;  // Step 1: Multiply a and b, store in a
    b = a / b;  // Step 2: Divide new a by b to get original a
    a = a / b;  // Step 3: Divide new a by new b to get original b

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


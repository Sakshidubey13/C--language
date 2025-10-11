//Q9. C Programming to Check Wheather a Number Is Palindrome  Or Not
#include <stdio.h>

int main() {
    int num, i, isPrime = 1; 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}


//Q11. C Programming to Check Armstrong Number
#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  
    
    printf("Enter First numbers: ");
    scanf("%lf", &num1);

   printf("Enter Second numbers: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; 
            }
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}


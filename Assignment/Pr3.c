// Q3. C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main()
{
    int a, b, c;

    // Input three numbers
    printf("Enter First number: ");
    scanf("%d", &a);
     printf("Enter Second number: ");
    scanf("%d", &b);
     printf("Enter Third number: ");
    scanf("%d", &c);
    
    
    
    

    // Check which is the largest
    if (a >= b && a >= c)
        printf("%d is the largest number.\n", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.\n", b);
    else
        printf("%d is the largest number.\n", c);

    return 0;
}


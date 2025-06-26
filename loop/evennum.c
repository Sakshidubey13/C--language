#include<stdio.h>

void main()
{
    // wap to print even no. from N to 1 using while loop.
    int n;

     printf("Enter the value of N: ");
    scanf("%d", &n);

    //decrement condition.

    while (n >= 1)
     {
        if (n % 2 == 0)
         {
            printf("%d\n", n);
         }
        n--;
    }

}
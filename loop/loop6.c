#include<stdio.h>

void main()
{
    // wap to print even no. from N to 1 using while loop.
    int N;

     printf("Enter the value of N: ");
    scanf("%d", &N);

    //decrement condition.

    while (N >= 1)
     {
        if (N % 2 == 0)
         {
            printf("%d\n", N);
         }
        N--;
    }

}
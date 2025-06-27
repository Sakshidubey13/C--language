#include<stdio.h>

void main()
{
    // wap to print even no. from N to 1 using do_WHILE loop.
    int n;

     printf("Enter the value of N: ");
    scanf("%d", &n);

    //decrement condition.

    do
     {
        if (n % 2 == 0)
         {
            printf("%d\n", n);
         }
        n--;
    }  while (n >= 1);//Created while loop, loop will end when i bacome greater than n..
}
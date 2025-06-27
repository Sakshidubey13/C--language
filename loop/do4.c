#include <stdio.h>

void main() 
{
     int i, n;
    i = 1;

    // wap to print N to 10 using DO loop.

    printf("Enter the starting number (N): "); // Input from user
    scanf("%d", &n);                           // user input

    do
    {
        printf("%d\n", n);//print n.
        n--;
    } while (n >= 1);//Created while loop, loop will end when i bacome greater than n..

}
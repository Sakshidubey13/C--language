#include <stdio.h> //Standard input output header file

void main()
{
    //wap to print the multipication table of n using for loop.1
    int n, i = 1;

    printf("Enter Number Which you want to Table :");
    scanf("%d", &n);

    do
    {
        printf("%d * %d =%d \n", n, i, n * i);
        i++;
    } while (i <= 10);//Created while loop, loop will end when i bacome less than n..
}
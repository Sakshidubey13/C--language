#include <stdio.h>
#include <conio.h>

int main()
{
    // 4 .develop a  program that prints the given Inverted Left half traingle pattern using a nested for loop

    // 1 0 1 0 1
    //   1 0 1 0
    //     1 0 1
    //       1 0
    //         1

    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (k = i; k <= 4; k++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0 ");//print out 0 when if condition is true
            }
            else
            {
                printf("1 ");//print out 1
            }
        }
        printf("\n");//to get new line
    }
}
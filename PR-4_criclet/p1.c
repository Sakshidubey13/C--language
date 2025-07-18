#include <stdio.h>
#include <conio.h>

void main()
{
    // 1.develop a program that prints the given Right half triangle patter using a nested for loop .
  
    // 41
    // 41 42
    // 41 42 43
    // 41 42 43 44
    // 41 42 43 44  45

    int i, j;//declaration variable

    for (i = 41; i <= 45; i++)//outer loop row
    {
        for (j = 41; j <= i; j++)//inner loop coloum
        {
            printf("%d ", j);//print out j value 
        }
        printf("\n");//to get new line
    }
}
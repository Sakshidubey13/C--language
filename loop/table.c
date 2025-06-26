#include <stdio.h>

void main()
{
    // wap to print the multipication table of N using while loop.

    
    int n;
    int i = 1;

    printf("Enter a multipication table of N = ");//input variable
    scanf("%d", &n); //user input the variable

     while (i <= 10)//check condition
      {

        //output the result
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

}
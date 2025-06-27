#include<stdio.h>

 void main()
 {
    //wap to print odd no. from 1 to N using do loop

    int n;
    int i = 1;

    printf("Enter the number N = ");//user input the value n
    scanf("%d", &n);//user input

    do
    {
       if (i % 2 == 1)
        {
            printf("%d\n", i); // output the result
        }
        i++;
    } while (i <= n);//Created while loop, loop will end when i bacome less than n..

   }

    
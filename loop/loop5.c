#include<stdio.h>

void main()
{
    //wap to print odd no. from 1 to N using while loop .

    int N;
    int i = 1;

    printf("Enter the value of N = ");//user input the variable
    scanf("%d", &N);//user input 
 
    // increment condition.
    while (i <= N)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);  //output the result
        }
        i++;
    }
}
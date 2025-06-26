#include<stdio.h>

void main()
{
    //wap to print odd no. from 1 to N using while loop .

    int n;
    int i = 1;

    printf("Enter the value of N = ");//user input the variable
    scanf("%d", &n);//user input 
 
    // increment condition.
    while (i <= n)
    {
        if(i % 2 == 1)
        {
            printf("%d\n",i);  //output the result
        }
        i++;
    }
}

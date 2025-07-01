#include<stdio.h>

void main()
{
    //wap to find sum of all digits of a number .
    int num; //initialize num with value
    int sum = 0;

    printf("Enter a number = ");//user input number message
    scanf("%d", &num);//read user input number


    while(num > 0)// loop until num is greater than 0
    {
        int ld = num % 10; //num % 10 gives the last digit of num
        sum = sum + ld;// add last digit to sum
                       
        num /= 10; //remove last digit
    }
    printf("sum of all digit = %d\n", sum); //output the sum of all digits 
}
#include<stdio.h>

void main()
{
    //wap to find sum of all digits of a number .
    int num = 123456; //initialize num with value
    int sum = 0;
    while(num > 0)// loop until num is greater than 0
    {
        sum += num % 10;// add last digit to sum
                        //num % 10 gives the last digit of num
        num /= 10; //remove last digit
    }
    printf("sum of all digit = %d\n", sum); //output the sum of all digits
}
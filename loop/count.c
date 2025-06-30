#include<stdio.h> //include standard input and output header file

void main() //main function
{
    //wap to count digit of a number

    int num = 245; //initialize num with a value
    int count = 0; //initialize count to 0

    while(num > 0) //loop until num is greater than 0
    {
        num /= 10; //divide num by 10 to remove the last digit
        count = count + 1; //increment count
    }

    printf("Count = %d\n", count); //output the count of digits
}
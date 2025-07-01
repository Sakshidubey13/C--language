#include<stdio.h> //include standard input and output header file

void main() //main function
{
    //wap to count digit of a number

    int num = 245; //initialize num with a value
    int count = 0; //initialize count to 0

    while(num > 0) //loop until num is greater than 0 // 125 > 0
    {
        num /= 10; //divide num by 10 to remove the last digit // 245/10=12 , 24/10=1 , 2/10=0
        count = count + 1; //increment count // 1 2 3
    }

    printf("Count = %d\n", count); //output the count of digits
}
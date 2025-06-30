#include<stdio.h>//include standard input and output header file

void main()

{
    //wap to count digit of a number

    int num  = 218;.//initialize num with a value .
    int count = 0;// initialize count to 0.

    while(num >= 0)//loop until num is greater than or equal to 0
    {
        num /= 10;// divide num by 10 to remove the last digit
        count++;// count = count + 1
    }

    printf("Count = %d\n", count); //output the count of digits
    
}
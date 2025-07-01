#include <stdio.h>

void main()
{
    // wap to find sum of first and last digit of a number

    int num = 895;     // intialize num with a value
    int ld = num % 10; // last digit
    int fd = 0;        // first digit

    while (num > 9) // loop until num is greater than 9
    {
        num /= 10; // remove last digit// 895/10=89 , 89/10=8 , 8/10=0 //num=8
    }
    fd = num; // value of num=8 is copy in first digit

    printf("sum of first and last digit : \n"); // to print first and last digit
    printf("%d + %d = %d\n ", fd, ld, fd + ld); // 8+5= 13
}
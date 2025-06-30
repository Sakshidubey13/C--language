#include<stdio.h>

void main()
{

    int num = 695456;//intialize num with a value
    int ld = num % 10;//last digit
    int fd = 0;//first digit
    while(num > 9)//loop until num is greater than 9
    {
        num /= 10; //remove last digit
       
    }
        fd = num; //first digit
        printf("sum of first and last digit : \n");// outout message
        printf("%d + %d = %d\n ", fd, ld, fd + ld);
}
#include<stdio.h>

void main()
{
    // wap to reverse user given input number    example 123 will be 321

    int num;
    int rev = 0;// variable to store the reversed number
    int ld; // variable to store remainder (last digtit)

    printf("Enter a number to reverse it : "); //user input number message
    scanf("%d", &num); //read user input number

    // loop to reverse the number
     while(num > 0) //loop until num is greater than 0.
     {
        int ld = num % 10; // get last digitof num
           rev = (rev * 10) + ld; // add last digit to rev                    
         num /= 10; //remove last digit from number
     }
       printf("Reversed number is : %d\n", rev); //output the reversed number
    
 
    }
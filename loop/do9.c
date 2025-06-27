#include <stdio.h> //Standard input output header file

void main()
{
    //wap to calculate the factorial of n. using Do_while loop.
    int i = 1, n;
    int fact = 1;

    printf("Enter a number Factorial:");//user input the value
    scanf("%d", &n);//user input 

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n); //Created while loop, loop will end when i bacome less than n..

    printf("Factorial is = %d", fact); // print fact 
                                       
}
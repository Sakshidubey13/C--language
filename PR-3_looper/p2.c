#include <stdio.h>
#include <conio.h>

void main()
{
    // Develop a Program  to count the total number of digit in a numbe

    int n;//declaretion variable
    int count = 0;//declaration variable

    printf("Enter any number : ");//input massge for any number
    scanf("%d", &n);//user input any number

    while (n > 0)// loop run n is grater than 0  
    {
        n /= 10;//divide num by 10 to remove the last digit 
                // 245/10 = 12 , 24/10 = 1 , 2/10 = 0
        count = count + 1;//increment count // 1 2 3 
    }

    printf("Total number of digit :  %d\n", count);// print output count of digit
}
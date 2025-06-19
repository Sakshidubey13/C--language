#include<stdio.h>
#include<conio.h>
int main()
{
	//3.WAP to find a the answer given formula (x+y)3.
   int x,y,result;
	
    printf("Enter value of x: "); // Input values x
    scanf("%d", &x);//user input the x variable

    printf("Enter value of y: ");//input values y
    scanf("%d", &y);//user input the y variable

    // Calculate (x + y)3// x³ + 3x²y + 3xy² + y³
    result = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);
    
    printf("Result of (x+y)3 = %d\n",result);
    
    return 0;
}
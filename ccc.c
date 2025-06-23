#include<stdio.h>
#include<conio.h>


void main()
{

	//swaping value without using addition and subtraction :
	
	int x = 20000;
	int y = 90000;
	int z;
	
	z = x;
	x = y;
    y = z;
    
    printf("%d\n", x);
    printf("%d\n",y);
}

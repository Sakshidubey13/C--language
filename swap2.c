#include<stdio.h>
#include<conio.h>
  void main()
{
	//wap to swap value of two variable without using variable.
	
	int x = 10; //Variable 10 is assign in integer variable x.
	int y = 20; //Variable 20 is assign in integer variable y.
	
	// Swap Using + and - .
	x = x+y; // x = 10+20 = 30
	y = x-y; // y = 30-20 = 10 
	x = y+y; // x = 10+10 = 20
	
	printf("x = %d\n",x); //To print value of variable x.
	printf("y = %d\n",y); //To print value of variable y.
	
}
#include<stdio.h>
#include<conio.h>
  int main()
  {
  	//2.WAP to find a the answer given formula (x-y)2.
 
  	int x,y,result;
  	
  	
    printf("Enter value of x : ");
	scanf("%d", &x);
	
	printf("Enter value of y : ");
	scanf("%d", &y);
	
	//calculate (x-y)2
	result = (x*x) + (2*x*y) - (y*y);
	
	//output the  result 
	printf("Result of (x-y)2 = %d\n",result); 	
  }
#include<stdio.h>
#include<conio.h>

  int main()
{
	//5.WAP to find a the answer given formula (x+y+z)3.
	int x,y,z,result;
	printf("Enter value of x : ");
	scanf("%d", &x);
	
	printf("Enter value of y : ");
	scanf("%d", &y);
	
	printf("Enter value of z : ");
	scanf("%d", &z);
	
	
	//calculate (x+y+z)3 == x^{3}+y^{3}+z^{3}+3(x+y)(y+z)(z+x)\)
	result = (x*x*x) + (y*y*y) + (z*z*z) + (3(x+y) * (y+z) * (z+x));
	
	//output result
	printf("Result of (x+y+z)3 = %d\n",result);
	
	return 0;
}
  

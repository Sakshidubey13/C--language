#include<stdio.h>
#include<conio.h>
  int main ()
  { 
  	int x,y,z,result;
  	
  	printf("Enter value of X : ");//input value x
  	scanf("%d", &x);//user input the x variable

  	
  	printf("Enter value of Y : ");//input value y
  	scanf("%d", &y);//user input the y variable

  	
  	printf("Enter value of Z : ");//input value z
  	scanf("%d", &z);//user input the z variable


       // calculate of (x+y+z)² = x² + y² + z² + 2xy + 2yz + 2xz. 
       result = (x*x) + (y*y) + (z*z) + (2*x*y) + (2*y*z) + (2*x*z);
       
       //output the result
       printf("Result of (x+y+z)2 = %d\n", result);
       
       return 0;
       
   }

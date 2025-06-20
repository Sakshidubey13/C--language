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

   //calculate of (x-y-z)3 = x3-3x2(y+z)+3x(y+z)2-(y+z)3
   result = (x*x*x) - (3*x*x*y+z) + (3*x*y*y+2*y*z+z*z) - (y*y*y+3*y*y*z+3*y*z*z+z*z*z);
   
   //output the result
   printf("Result of (x-y-z)3 = %d\n", result);
   
   return 0;
   
}


 

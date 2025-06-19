#include<stdio.h>
#include<conio.h>

  void main()
  {
  	//wap to swap value of two without using third variable.( =without using + and -)
  	
  	int x = 10; // variable 10 is assign in integer variable x.
  	int y = 20; // variable 20 is assign in integer variable y.


    // Swap using * and /
    x = x * y;  // x = 10 * 20 = 200
    y = x / y;  // y = 200 / 20 = 10
    x = x / y;  // x = 200 / 10 = 20
  	
  	printf("x = %d\n",x); //To print value of variable x.
  	printf("y = %d\n",y); //To print value of variable y.
  	
  }

#include<stdio.h>
#include<conio.h>
  void main()
{
     //CHECK NUMBER IS POSITIVE, NEGATIVE OR NEUTRAL USING ladder if else.
	
	int x = -500;
	
    	if(x>0)//x = 500
	{
		printf("Number is possitive !");//print out
	}
	   else if(x<0)//x = -500
	{
	printf("Number is negative !");	//print out
	}
       else//( x == 0)
    { 
    printf("Number is neutral !");//print out
	}
}
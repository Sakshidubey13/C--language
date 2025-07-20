#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to  print a pattern- hollow dimond shape pattern;with minimum condition.....
	
	int i,j,  a=7,b=7;
	for(i=1;j<=7;i++)
	{
	 for(j=1;j<=13;j++)
	 {
	 	if(j==a || j==b)
	 	{
	 		printf("* ");
		 }
		 else
		 {
		 	printf("  ");
		 }
		 }	
		if(i<7)
		{
			a--;
			b++;
		}
		else
		{
			a++;
			b--;
		}
		printf("\n");
	}
}

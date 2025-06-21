#include<stdio.h>
#include<conio.h>

void main()
{
	//using nasted if , else. (for more condion)
	int a,b,c,d,e;
	
	printf("Enter a value A : ");//input value a
	scanf("%d",&a);//user input the value a
	
	printf("Enter a value B : ");//input value b
	scanf("%d",&b);//user input the value b
	
	printf("Enter a value C : ");//input value c
	scanf("%d",&c);//user input the value c
	
	printf("Enter a value D : ");//input value d
	scanf("%d",&d);//user input the value d
	
	printf("Enter a value E : ");//input value e
	scanf("%d",&e);//user input the value e
	
	//a,b,c,d,e
	if(a>b)
	{ //a,c,d,e
	 if(a>c)
	 { //a,d,e
	 	if(a>d)
	 	{
	 	if(a>e)	
	 	{
	 	printf("A is maximum !");		//output the result
		 }
		 else
		 {
		 	printf("E is maximum !");	//output the result
		 }
		 }
		 else
		 {
		 if(d>e)
		 {
		 	printf("D is maximum !");	//output the result
			 }	
			 else
			 {
			 	printf("E is maximum !");	//output the result
			 }
		 }
		 }
		 else
		 { //c,d,e
		 	if(c>d)
		 	{
		 	if(c>e)
			 {
			 printf("C is maximum !");		//output the result
				 }
				 else
				 {
				 	printf("E is maximum !");	//output the result
					 }	
			 }
			 else
			 {
			 	if(d>e)
			 	{
			 	printf("D is maximum !");	//output the result	
				 }
				 else
				 {
				 	printf("E is maximum !");	//output the result
				 }
			 }
			 }	
	}
	else
	{ //b,c,d,e
	if(b>c)
	{
		if(b>d)
		{
		  if(b>e)
		  {
	         printf("B is maximum !");	//output the result
			  }
		}
		else
		{
		    printf("E is maximum !");		//output the result
		}
		}
		else
		{
			if(d>e)
			{
				printf("D is maximum !");	//output the result
			}
			else
			{
			    printf("E is maximum !");		//output the result
			}
			}	
	}

}

#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	
	printf("Enter A number : ");//input the a variable
	scanf("%d",&a);//user input the number
	
	printf("Enter B number : ");//enter the b variable
	scanf("%d",&b);//user input the number
	
	if(a>b)
	{
		printf("A is maximum ! ");//print output
	}
	else
	{
	
		printf("B is maximum ! ");//print output
	}

	
	return 0;
}
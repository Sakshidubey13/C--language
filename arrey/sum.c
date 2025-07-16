#include<stdio.h>
#include<conio.h>

void main()
{
	//Wap to find sum of all element of array.
	
	int i,n, sum = 0;
	
	printf("Enter Size of Array : ");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enetr a[%d] : ", i);
		scanf ("%d", &a[i]);
		
		sum = sum + a[i];
		
	}
	printf("Sum of all Array Element is : %d", sum);
}

#include<stdio.h>
#include<conio.h>

void main()
{
	// * * * * *
	//   * * * *
	//     * * *
	//       * *
	//         *
	
	int i, j, k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

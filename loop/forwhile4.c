#include <stdio.h>

void main()
 {
 	//wap to print N to 1 using for loop.
 	
    int n, i = 1;

    
    printf("Enter the value of N: ");// Input from user
    scanf("%d", &n);//user input

   
    for(i = n; i >= 1; i--)
     {
        printf("%d\n", i);//final result Print from N to 1
    }

    return 0;
}

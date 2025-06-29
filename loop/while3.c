#include<stdio.h>

void main()
 {
 	 //wap to print 1 to N using  WHILE LOOP.

 	
    int n, i = 1;

    printf("Enter value of N: ");//user input the value of n.
    scanf("%d", &n);//user input

    while(i <= n)//Created while loop, loop will end when i bacome less than n..
	 {
        printf("%d\n ", i);//print i
        i++;//i=i+1 Increase i by 1 in every step (go to next number).
    }

    return 0;
}


#include<stdio.h>
#include<conio.h>


void main()

{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf(" It is Divisable for 3 and 5 !");
    }
    else if(num % 3 == 0)
    {
        printf("Divisable for 3");
    }
     else if(num % 5 == 0)
    {
        printf("Divisable for 5");
    }
    else
    {
       printf(" It is Not divisable for 3 and 5 !");
    }
}


#include<stdio.h>
#include<conio.h>

void main()
{
    //2. Write C program to print multiplication table of any number.
    int n,i = 1;

    printf("Enter a which you want  table = ");
    scanf("%d", &n);

    do
    {
        printf("%d * %d = %d\n", n,i, n*i);
        i++;
    }while(i <= 10);
}
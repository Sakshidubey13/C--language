#include<stdio.h>
#include<conio.h>
 // print numbers from 1 to 100.
void main()
{
    int i,n;

    printf("Enter a number : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

}
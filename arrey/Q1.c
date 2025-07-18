#include<stdio.h>
#include<conio.h>

int main()
{
    //Q.1 Write a Program to find the length of a 1D array.

    int i,n,length;//declare variable name

    printf("Enter a size of Array : ");
    scanf("%d", &n);
    length = n;

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);

    }

    printf("Length of Array : %d", length);
}
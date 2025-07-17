#include<stdio.h>
#include<conio.h>

void main()
{
    //Write a pogram in C to copy the elements of one array into a another array.
   
    int i,n;

    printf("Enter Size of Array : ");
    scanf("%d ", &n);

    int a[n],b[n];

    for(i=0; i<n;i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d ", &a[i]);
    }
     for(i=0;i<n;i++)
     {
        b[i] = a[i];
        printf("%d ",b[i]);
     }
}
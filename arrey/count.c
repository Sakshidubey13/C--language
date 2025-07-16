#include<stdio.h>
#include<conio.h>

void main()
{
    // wap to get and prinit array of n size :

    int n,i;

    printf("Enter n : ");
    scanf("%d", &n);

    int arr[n]; // in array under always index is starting from 0 & n-1;

    for(i=0;i<n;i++)
    {
       printf("Enter a[%d];  ",i);
       scanf("%d", &arr[i]);
      

    }
    
        for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }

}

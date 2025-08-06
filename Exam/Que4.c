#include <stdio.h>

int main()
{
    //write a c pogram that uses pointer to find the sum of two 1 D arrays.
    
    int i,n,sum = 0; 

    printf("Enter Size of Array : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);

        sum = sum + a[i];

    }

    printf("Sum os all Array Element is : %d", sum);


}

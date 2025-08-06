#include <stdio.h>


/* implement pattern using nested for loop.
10 9 8 7 6
   9 8 7 6
     8 7 6
       7 6
         6
           */


void main()
{
    int i, j, k;

    for (i = 10; i >= 6; i--)
    {
      
        for (k = 10; k > i; k--)
        {
            printf("  ");
        } 

        
        for (j = i; j >= 6; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}



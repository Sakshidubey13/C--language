#include <stdio.h>
#include <conio.h>

int main()
{
    //  * * *
    //*      *
    //*     *
    //* * *
    //*    *
    //*     *
    //*       *

    int i, j;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i == 1 && (j != 1 && j != 5 && j!=6))
            {
                printf("* ");
            }
            else if (i == 2 && (j != 2 && j != 3 && j != 4&& j!=6))
            {
                printf("* ");
            }
            else if (i == 3 && (j != 2 && j != 3 && j != 5&& j!=6))
            {
                printf("* ");
            }
            else if(i==4 && (j!=5 && j!=4&& j!=6))
            {
                printf("* ");
            }
            else if(i==5 && (j!=2 && j!=3 &&j!=5&& j!=6))
            {
                printf("* ");
            }
            else if(i==6 && (j!=2 && j!=3 &&j!=4&& j!=6))
            {
                printf("* ");
            }
            else if(i==7 && (j!=2 && j!=3 &&j!=4 &&j!=5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <conio.h>

int main()
{
    //  * * * *
    //*
    //*
    //  * * *
    //        *
    //        *
    //* * * *

    int i, j;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 && j != 1) || (i == 7 && j != 5))
            {
                printf("* ");
            }
            else if(j==1 && (i!=1 && i!=4&& i!=5 && i!=6))
            {
                printf("* ");
            }
            else if(i==4 &&(j!=1 && j!=5))
            {
                printf("* ");
            }
             else if(j==5 && (i!=2 && i!=3&& i!=4 && i!=7))
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
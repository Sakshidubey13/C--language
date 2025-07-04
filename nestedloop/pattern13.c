#include <stdio.h>
#include <conio.h>

void main()
{
    //*
    //* *
    //* * *
    //* * * *
    //* * * * *

    int i, j;//declare variables

    for (i = 1; i <= 5; i++)//outer loop for rows
    {
        for (j = 1; j <= i; j++)// inner loop for columns
        {
            printf("* ");// print star
        }
        printf("\n");// to get new line
    }
}
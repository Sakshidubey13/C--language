#include <stdio.h>// standard input output 

// Q.1 Write a Program to find the cube of a given number using UDF.

void cube(int n)
{
    int c = n * n * n;// formula 
    printf("Cube is : %d", c);
}

int main()
{
    int n;

    printf("Enter Any Number : ");
    scanf("%d ", &n);

    cube(n);
    return 0;
}
#include <stdio.h>

int main() 
{
    float length, breadth, area;

    // Input the length and breadth
    printf("Enter the length of the rectangle: "); //input lenght of rectengle
    scanf("%f", &length);//user input of length

    printf("Enter the breadth of the rectangle: ");//input  breadth of the rectengle
    scanf("%f", &breadth);//user input of breadth

    //output the result
    printf("Area of the rectangle = %.2f\n", length * breadth); // Print output

    return 0;
}
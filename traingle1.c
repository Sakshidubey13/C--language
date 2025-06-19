#include <stdio.h>

int main() 
{
    float base, height, area;


    printf("Enter the base of the triangle: ");//input base of triangle
    scanf("%f", &base);//user input of base

    printf("Enter the height of the triangle: ");//input base of triangle
    scanf("%f", &height);//user input of height

    
    printf("Area of the triangle = %f\n", 0.5 * base * height);//print output

    return 0;
}



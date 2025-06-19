#include <stdio.h>

  int main() 
{
    float radius, perimeter;

   
    printf("Enter radius of the circle: ");//input massge for radius of the circle
    scanf("%f", &radius);//user to enter radius

    //  Use formula
    perimeter = 2 * 3.14 * radius;

    
    printf("Perimeter of the circle is: %.2f\n", perimeter);//print output
     
     return 0;
}
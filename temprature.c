#include<stdio.h>
#include<conio.h>

int main()
 {
 	// Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9.5*c)+32)
 	
    float celsius, fahrenheit;

     printf("Enter temperature in Celsius: "); // Input temperature in Celsius
    scanf("%f", &celsius);//user input temperature in Celsius


    // Output the result
    printf("Temperature in Fahrenheit: %.2f\n", (9.5 * celsius) + 32);

    return 0;
}
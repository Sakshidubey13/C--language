//  Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9/5*c)+32).

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int celsius; // Declared int variable
    float fah;   // Declared float variable

    printf("Enter Degree in Celsius :"); // Input message for Celsius
    scanf("%d", &celsius);               // User input to Celsius

    fah = (celsius * 9 / 5) + 32; // Converted Celsius to Fahrenheit

    printf("Fahrenheit =%f", fah); // to print Fahrenheit
}
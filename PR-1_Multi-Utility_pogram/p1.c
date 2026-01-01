#include<stdio.h>// Standard input output header file.

void main()
{
    //Write C pogram to convert Temperature F rom degree Celsius to Fahrenheit.(f=(9/5*c)+32).

    int celsius;//declared int variable
    float fah;//declared float variable

    printf("Enter Degree in Celsius : ");//input massge for celsius
    scanf("%d", &celsius);

    fah=(celsius*9/5) + 32;//Converted Celsius to Fahrenheit....

    printf("Fahrenheit = %f ",fah);//to print value of Fahrenheit....



}
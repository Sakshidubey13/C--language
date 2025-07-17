#include<stdio.h>
#include<conio.h>

void main()
{
    //Wap to find the third angle of a triangle when two other r angle are given .

    int first_angle;
    int second_angle;
    int third_angle;   // declared three angle in integer variable

    printf("Enter a First Angle : "); //input massge for First angle value
    
    scanf("%d",&first_angle);//user input first angle value

    printf("Enter a Second Angle : ");//Input massge for Second angle value
    scanf("%d",&second_angle);//user input second angle value

    third_angle = 180 -(first_angle +second_angle); // formula of calculation

    printf("Third Angle of Triangle is : %d", third_angle);//to print out third triangle value


}
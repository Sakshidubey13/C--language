#include <stdio.h>
#include <conio.h>

void main()
{
    // Write C program to find gross salary.
    //(Gross salary = Base Salary + HRA(House Rent Allowance) + DA(Dearess Allowance) + TA(Travel Allowance))
    // example = 100rs, HRA = 10%, DA=5%, TA=8%,
    // ans = 123 rs

    int basic_salary, hra, da, ta, gross_salary; // declared integer variable

    printf("Enter Basic Salary : "); // Input message for basci salary
    scanf("%d",&basic_salary);     // user input basic salary

    hra = basic_salary*10/100; // Calculate HRA(House Rent Allowance)
    da = basic_salary*5/100;   // Calculate DA(Dearness Allowance)
    ta = basic_salary*8/100;   // Calculate TA(Travel Allowance)

    gross_salary = basic_salary + hra + da + ta; // Gross salary find out formula show

    printf("\nHRA is : %d", hra); // print out hra
    printf("\nDA is : %d", da);  // print out da
    printf("\nTA is : %d", ta); // print out ta
    printf("\nGross_salary is : %d", gross_salary); // print out gross salary
}
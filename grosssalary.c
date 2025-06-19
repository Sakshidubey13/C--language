#include<stdio.h>

 void main()
 {
 	// Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
 	//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
      //Ans = 123 RS
 	
    float baseSalary, hra, da, ta, grossSalary;

    // Input base salary, HRA, DA and TA
    printf("Enter Base Salary: ");//input the gross salary
    scanf("%f", &baseSalary);//user input the basesalary

    printf("Enter HRA (House Rent Allowance): ");//input the hra
    scanf("%f", &hra);//user in hra(House Rent Allowance)

    printf("Enter DA (Dearness Allowance): ");//input the da 
    scanf("%f", &da);//user input da(Dearness Allowance)

    printf("Enter TA (Travel Allowance): ");//input the ta
    scanf("%f", &ta);//user input ta(Travelling Allowance)

    // Calculate gross salary
    grossSalary = baseSalary + hra + da + ta;

    // Output the result
    printf("Gross Salary = %.2f\n", grossSalary);//print output

 }
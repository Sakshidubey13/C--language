#include<stdio.h>
#include<conio.h>

 void main()
 {
 	//Voting eligibility with Nested if & Validation .
 	int age;
 	
 	printf("Enter your age : ");//input enter your age
 	scanf("%d", &age);//user input the age
 	
 	if(age >= 18)
 	{
 		if(age > 100)
 		{
 			printf("You can not add age more than 100 !");//print output
		 }
		 else
		 {
		 	printf("You are eligible to vote !");//print output
		 }
	 }
	 else
	 {
	 	if(age <= 0)
	 	{
	 		if(age == 0)
	 		{
	 		    printf("0 is not allowed !");//print output	
			 }
			 else
			 {
			 	printf("Negative age is not allowed !");//print output
			 }
		 }
		 else
		 {
		 	printf("You are not eligible to vote !");//print output
		 }
	 }
	 return 0;
 }

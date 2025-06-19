#include<stdio.h>
#include<conio.h>

void main()
 {
    int age;

    printf("Enter your age: ");//input the age
    scanf("%d", &age);//user enter the age

 
    if(age >= 18) {
        printf("You are eligible for vote ! ");
    }
    else 
	{
        // Check if user is eligible to vote
        if(age >= 18) 
		{
            printf("You are eligible to vote ! ");//print out
        }
		 else //(age<18)
		{
            printf("You are not eligible to vote !");//print out
        }
    }
}
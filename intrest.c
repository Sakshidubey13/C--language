#include <stdio.h>

void main()
 {
    float principal, rate, time, interest;

  
    printf("Enter Principal amount: ");//input massge for principal amt.
    scanf("%f", &principal);//user input principal amt.

    printf("Enter Rate of Interest (in %% per year): ");
    scanf("%f", &rate);//user input rate of intrest.

    printf("Enter Time (in years): ");//input massge for time(in the years).
    scanf("%f", &time);//user input time in year

    //Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %f\n", interest);//print output
}

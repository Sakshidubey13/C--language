#include <stdio.h>

void main()
{
    // WAP to create Simple Grade Calculator

    int score;
    char grade;

    printf("Enter Your Score : ");
    scanf("%d", &score);

    if (score >= 90)
    {
        grade = 'A';
        printf("Your Grade is A");
    }
    else if (score >= 80)
    {
        grade = 'B';
        printf("Your Grade is B");
    }
    else if (score >= 70)
    {
        grade = 'C';
        printf("Your Grade is C");
    }
    else if (score >= 60)
    {
        grade = 'D';
        printf("Your Grade is D");
    }
    else if (score >= 50)
    {
        grade = 'E';
        printf("Your Grade is E");
    }
    else
    {
        printf("Sorry, You Failed");
        return; // Stop if failed
    }

    // Switch block for message
    switch (grade)
    {
        case 'A':
            printf("\nExcellent Work!");
            break;
        case 'B':
            printf("\nGood Work!");
            break;
        case 'C':
            printf("\nNeed More Efforts!");
            break;
        case 'D':
            printf("\nMore Practice Can Do!");
            break;
        case 'E':
            printf("\nJust Passed. Try to Improve!");
            break;
    }

    // Final message
    if (grade >= 'A' && grade <= 'D')
    {
        printf("\nYou are eligible for the next level!");
    }
    else
    {
        printf("\nPlease try again next time.");
    }
}

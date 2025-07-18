#include <stdio.h>
#include <conio.h>

void main()
{
    // Wap to create Simple Grade Calculate

    int a;//declare vaiable

    printf("Enter Your Score : ");//input massge for Score
    scanf("%d", &a);//user input Oure's score

    if (a >= 90)
    {
        printf("Your Grade is A ");
    }
    else if (a >= 80 && a <= 90)
    {
        printf("Your Grade is B ");
    }
    else if (a >= 70 && a <= 80)
    {
        printf("Your Grade is C ");
    }
    else if (a >= 60 && a <= 70)
    {
        printf("Your Grade is D ");
    }
    else if (a >= 50 && a <= 60)
    {
        printf("Your Grade is E ");
    }
    else
    {
        printf("Sorry , you Failed");
    }
}
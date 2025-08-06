#include <stdio.h>
#include <conio.h>

/*Dvelop a program that checks
  whether a given string is a palidrom or not
  without using string function . */

void main()
{
    char name[100];
    int lenght = 0, i;

    printf("Enter your name :  ");
    scanf("%s", name);

    while (name[lenght] != '\0')
    {
        lenght++;
    }

    printf("Reverse name : ");

    for (i = lenght - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    printf("\n");
}
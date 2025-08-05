#include <stdio.h>
#include<string.h>

void main()
{
    char name[50];  // Declare a string (character array)

    printf("Enter your name: ");
    scanf("%s", name);  // Take input from user 

    printf("Hello, %s\n", name);  // Display the string
}

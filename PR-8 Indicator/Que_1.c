#include <stdio.h>

int main()
{
    char name[100];
    char *ptr;
    int length = 0;

    printf("Enter any string: ");
    scanf("%s", name); 

    ptr = name;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

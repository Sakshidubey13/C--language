#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int length = 0;
    printf("Enter your name : ");
    scanf("%s",name);

    int i;

    for(i=0; name[i]!='\0'; i++)
    {
        length ++;
    }

    printf("length is %d",length);
    return 0;
}
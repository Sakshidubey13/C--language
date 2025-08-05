#include<stdio.h>
#include<string.h>


void main()
{
    /*Dvelop a program that checks
       whether a given string is a palidrom or not 
       without using string function . */

       char name[100];
       char rev[100];

       int i;

       printf("Enter your Name : ");
       scanf("%s", &name);

       int n = strlen(name);// that declare of lenth of char

       strcpy(rev, name);// copy one string to another 
       strrev(rev);//it reverse a  string

       int x = strcmp(name, rev);

       printf("%d\n", x);
       printf("Real name : %s\n",name);
       printf("Reverse name : %s\n", rev);
}
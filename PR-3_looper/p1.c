#include<stdio.h>
#include<conio.h>

void main()
{

    //Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabates
    // using a do-while loop 

    char ch = 'a';  //declare a character value starting from a
    printf(" 3-letter skips A_to_Z");
    printf("\n");

    do
    {
        printf("%c ", ch);
        ch = ch + 4;  //ll alphabates came from to after last value have
                      // ex. a + 3(b,c,d) = e come for condition
                      // ex. e + 3(f,g,h)  = i come for condition tue 
                      // all posible outcome for a , e , i , m , q , u , y 
    }
     while (ch <= 'z');

    return 0;
}


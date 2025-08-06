#include <stdio.h>
#include <conio.h>
// frequency

  /*Extend the program to count the frequency of each 
  character in a given string....*/


void main()
{
    char str[100], i;
    int freq = 0;


    printf("Enter a name : ");
    gets(str);


    int j;

    for (i = 'a'; i <= 'z'; i++)
    {
        freq = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (i == str[j])
            {
                freq++;
            }
        }

        if (freq > 0)
        {
            printf("%c = %d\n", i, freq);
        }
    }
}
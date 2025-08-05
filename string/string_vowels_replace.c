#include <stdio.h>
#include <string.h>

 /*Replace vowels from string a,e,,i,o,u */

int main()
{
    char name[10] = "Sakshi";
   
    int i;

    int n = strlen(name);

    for (i = 0; i < n; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
             name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
          
        {
            name[i] = ' ';
        }
    }

    printf("%s", name);
}
#include<stdio.h>
#include<string.h>

/*Develop a c Program That reads a sentence from the user .
Create a function To count the occurences of each consonant in the sentence and display the counts*/

int isConsonant(char ch)
{
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z') &&
           (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u');
}

void countConsonants(char str[])
{
    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (isConsonant(ch))
        {
            freq[ch - 'a']++;
        }
    }

    printf("Consonant occurrences:\n");
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c = %d\n", 'a' + i, freq[i]);
        }
    }
}

int main()
{
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    countConsonants(sentence);

    return 0;
}

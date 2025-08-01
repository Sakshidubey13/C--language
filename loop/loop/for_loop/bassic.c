#include <stdio.h>
#include <conio.h>

// print hello world "n" times . take "n" as input from user.
void main()
{
    int i, n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)// intialization , condition , increment ...
    {
        printf("Hello world\n");
    }
}
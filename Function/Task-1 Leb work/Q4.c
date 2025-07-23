#include <stdio.h>
#include <conio.h>

void num(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", &i);
    }
}
void main()
{
    int n;

    printf("Enter Number : ");
    scanf("%d", &n);

    num(n);
}

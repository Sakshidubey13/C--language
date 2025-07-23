#include <stdio.h>
#include <conio.h>

void table(int n)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", n, i, i * n);
    }
}

void main()
{
    int n;
    printf("Enetr Number you want a TABLE : ");
    scanf("%d", &n);

    table(n);
}

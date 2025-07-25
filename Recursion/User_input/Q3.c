#include <stdio.h>
#include <conio.h>

// wap to find Sum of 1 to n using recursion..

void sum(int n, int i)
{
    if (n == 0)
    {
        printf("%d", i);
        return;
    }
    sum(n - 1, i + n);
    return;
}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d ", &n);

    sum(n, 0);
}
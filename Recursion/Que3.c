#include <stdio.h>
#include <conio.h>

int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}

void main()
{
    int ans=sum(5);
    printf("Sum = %d", ans);
}

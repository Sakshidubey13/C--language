#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int b[5];

    int lenght = sizeof(a) / sizeof(a[0]);

    int *ptr = &a[lenght - 1];

   int i;

    for (  i = 0; i < lenght; i++)
    {
        b[i] = *ptr;
        printf("%d\n", b[i]);
        ptr = ptr - 1;
    }
    return 0;
}
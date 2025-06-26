#include <stdio.h>

void main()
{
  // wap to find leap year from 2000 to 3000 using while loop.
  int start = 2000;
  int end = 3000;

  while (start <= end)

  {
    printf("%d\t", start);
    start += 4;
  }
}
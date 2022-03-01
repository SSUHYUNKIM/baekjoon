#include <stdio.h>

int main()
{
  int a, b, x, y;
  scanf("%d %d", &a, &b);

  x = (a - 1) / 4 - (b - 1) / 4;
  y = (a - 1) % 4 - (b - 1) % 4; 
  
  printf("%d", abs(x) + abs(y));
  return 0;
}
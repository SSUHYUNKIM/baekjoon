#include <stdio.h>

int main()
{
  int n, number;
  int result = 1;
  while (1){
    scanf("%d", &n);
    if (n == 0){
      break;
    }
    while (1){
      if(n < 1){
        printf("%d\n", result);
        result = 1;
        break;
      }
      number = n % 10;
      switch (number){
        case 0:
          result += 4;
          result++;
          break;
        case 1:
          result += 2;
          result++;
          break;
        default:
          result += 3;
          result++;
          break;
      }
        n /= 10;
    }
  }
  return 0;
}
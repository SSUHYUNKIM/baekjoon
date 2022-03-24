#include <stdio.h>

int main(){
  int a, b , resulta, resultb;
  scanf("%d %d", &a, &b);

  resulta = (a % 10 * 100) + (a / 10 % 10 * 10) + a / 100;
  resultb = (b % 10 * 100) + (b / 10 % 10 * 10) + b / 100;

  if(resulta > resultb) printf("%d", resulta);
  else printf("%d", resultb);
  return 0;
}
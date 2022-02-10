#include <stdio.h>

double factorial(int n){
  if(n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main(){
  int t, n, m, i;
  double result;
  scanf("%d", &t);

  for(i = 0; i < t; i++){
    scanf("%d %d", &n, &m);
    result = factorial(m) / (factorial(n) * (factorial(m-n)));
    printf("%.lf\n", result);
  }

  return 0;
}
#include <stdio.h>

int main(){
  int t, h, w, n, i, result;
  scanf("%d", &t);
  for(i = 0; i < t; i++){
    scanf("%d %d %d", &h, &w, &n);
    if(n % h == 0){
      result = h * 100 + (n / h);
    }
    else {
    result = (n % h) * 100 + (n / h + 1);
      }
    printf("%d\n", result);
  }
}
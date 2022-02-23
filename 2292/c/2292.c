#include <stdio.h>

int main(){
  int n, i = 1, count = 1;
  scanf("%d", &n);
  if(n == 1){
    printf("1");
    return 0;
  }     
  while(1){
    n -= i;
    i = count*6;
    count++;
    if(i >= n){
      break;
    }
  }
  printf("%d", count);
}
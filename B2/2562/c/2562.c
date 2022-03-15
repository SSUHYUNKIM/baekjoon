#include <stdio.h>

int main(){
  int i, num, max = 0, count;
  for(i = 1; i < 10; i++){
    scanf("%d", &num);
    if(max < num){
      max = num;
      count = i;
    }
  }
  printf("%d\n", max);
  printf("%d\n", count);
}
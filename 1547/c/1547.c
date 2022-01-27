#include <stdio.h>

int main(){
  int n, i, temp;
  int x, y;
  int answer[3] = {1, 2, 3};
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d %d", &x, &y);
    temp = answer[x-1];
    answer[x-1] = answer[y-1];
    answer[y-1] = temp;
  }
  printf("%d %d %d", answer[0], answer[1], answer[2]);
  for(i = 0; i < 3; i++){
    if(answer[i] == 1){
      printf("%d", i+1);
    }
  }
  return 0;
}
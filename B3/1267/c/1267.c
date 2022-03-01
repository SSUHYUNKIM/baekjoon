#include <stdio.h>

int main(){
  int n, usingtime, i;
  int y = 0;
  int m = 0;
  scanf("%d", &n);

  for(i =0; i < n; i++){
    scanf("%d", &usingtime);
    y += ((usingtime / 30) + 1) * 10;
    m += ((usingtime / 60) + 1) * 15;
  }

  if(y > m) {printf("M %d", m);}
  else if(y < m){printf("Y %d", y);}
  else{printf("Y M %d", y);}

  return 0;
}
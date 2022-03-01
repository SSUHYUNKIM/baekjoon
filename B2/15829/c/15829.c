#include <stdio.h>
#define M 1234567891

int main(){
  int l, i;
  char arr[51];
  long long result = 0, R = 1;
  
  scanf("%d %s", &l, &arr);

  for(i = 0; i < l; i++){
    result = (result + (arr[i] - 'a' + 1) * R) % M;
    R = (R * 31) % M;
  }

  printf("%lld\n", result);
  return 0;
}
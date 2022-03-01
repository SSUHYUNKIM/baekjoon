#include <stdio.h>

int main(){
  int n, m, i, j, k;
  int arr[100];
  int result = 0;
  int temp = 0;

  scanf("%d %d", &n, &m);
  for(i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }

  for(i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      for(k = j + 1; k < n; k++){
        temp = arr[i] + arr[j] + arr[k];
        if(temp > result && temp <= m){
          result = temp;
        }
      }
    }
  }
  printf("%d", result);
  return 0;
}
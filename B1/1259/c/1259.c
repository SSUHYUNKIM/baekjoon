#include <stdio.h>
#include <string.h>

int main(){
  char arr[6];
  int i, len, temp;

  while (1){
    scanf("%s", &arr);
    if (arr[0] == '0') break;
    len = strlen(arr);
    temp = 1;
    for (i = 0; i < len / 2; i++){
      if (arr[i] != arr[len -1 - i]){
        temp = 0;
        break;
      }
    }
    if(temp == 1){
      printf("yes\n");
    }else{
      printf("no\n");
    }
  }
  return 0;
}
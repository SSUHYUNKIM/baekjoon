#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000000

int main(){
  char input[MAX_LEN];
  int count = 0, i;

  scanf("%[^\n]%*c",input);
  int len = strlen(input);

  if(len == 1){
    if(input[0] == ' '){
      printf("0");
      return 0;
    }
  }

  for(i = 1; i < len-1; i++){
    if(input[i] == ' '){
      count++;
    }
  }

  printf("%d", count + 1);
  return 0;
}
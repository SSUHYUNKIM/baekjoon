#include <stdio.h>

int main(){
  int input;
  scanf("%d", &input);

  if(input % 4 == 0){
    if(input % 100 == 0 && input % 400 != 0){
      printf("0");
    } else{
      printf("1");
    }
  } else{
    printf("0");
  }
}
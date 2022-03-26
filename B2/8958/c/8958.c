#include <stdio.h>

int main(){
  char input[80];
  int n, i, j;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    int score = 1, result = 0;
    scanf("%s", input);
    for(j = 0; j < strlen(input); j++){
      if(input[j] == 'O'){
        result += score;
        score++;
      } else{
        score = 1;
      }
    }
    printf("%d\n", result);
  }
}
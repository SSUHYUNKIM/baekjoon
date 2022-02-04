#include <stdio.h>

int main(){
  int n, i;
  int check = 0;
  char name[30];
  int count[26]={0};

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s", name);
    count[name[0] - 97]++;
  }

  for(i = 0; i < 26; i++){
    if(count[i] >= 5){
      check++;
      printf("%c", i + 'a');
    }
  }

  if(check == 0){
    printf("PREDAJA");
  }
  return 0;
}
#include <stdio.h>

int main() {
  int input[8], i, a = 1, d = 1;
  for (i = 0; i < 8; i++) {
    scanf("%d", &input[i]);
  }

  for (i = 0; i < 8; i++) {
    if (input[i] != i + 1){
      a = 0;
      break;
    }
  }
  for (i = 0; i < 8; i++) {
    if (input[i] != 8 - i) {
      d = 0;
      break;
    }
  }

  if (a == 1) printf("ascending\n");
  else if (d == 1) printf("descending\n");
  else printf("mixed");

  return 0;
}
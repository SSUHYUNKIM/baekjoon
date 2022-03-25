#include <stdio.h>

int main()
{
  int i, j, input[10], result = 0;

  for (i = 0; i < 10; i++){
    scanf("%d", &input[i]);
    input[i] = input[i] % 42;
  }

  for (i = 0; i < 10; i++){
    int count = 0;
    for (j = i + 1; j < 10; j++){
      if (input[i] == input[j])
        count++;
    }
    if (count == 0)
      result++;
  }
  printf("%d", result);
}
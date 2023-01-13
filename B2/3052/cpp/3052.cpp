#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int i, j, input[10], result = 0;

  for (i = 0; i < 10; i++)
  {
    cin >> input[i];
    input[i] = input[i] % 42;
  }

  for (i = 0; i < 10; i++)
  {
    int count = 0;
    for (j = i + 1; j < 10; j++)
    {
      if (input[i] == input[j])
        count++;
    }
    if (count == 0)
      result++;
  }

  cout << result;
  return 0;
}
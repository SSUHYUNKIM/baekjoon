#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
  int mul[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
  int i, j;
  long long result = 0;
  string input;
  int temp[3];

  for(i = 0; i < 3; i++)
  {
    cin >> input;
    for (j = 0; j < 10; j++)
    {
      if(color[j] == input) 
        temp[i] = j;
    }
  }

  result = temp[0] * 10 + temp[1];
  result = result * mul[temp[2]];
  cout << result;
  return 0;
}
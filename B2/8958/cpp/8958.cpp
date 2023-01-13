#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string input;
  int n, i, j;
  cin >> n;

  for(i = 0; i < n; i++)
  {
    int score = 1, result = 0;
    cin >> input;
    for(j = 0; j < input.length(); j++)
    {
      if(input[j] == 'O'){
        result += score;
        score++;
      } else{
        score = 1;
      }
    }
    cout << result << endl;
  }

  return 0;
}
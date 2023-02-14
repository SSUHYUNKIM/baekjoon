#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int input, i, result = 0;

  for(i = 0; i < 5; i ++)
  {
    cin >> input;
    result += input * input;
  }
  result %= 10;
  
  cout << result << endl;
  return 0;
}
#include <iostream>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t, i;
  string input;

  cin >> t;

  for(i = 0; i < t; i++)
  {
    cin >> input;
    cout << input[0] << input[input.length() - 1] << endl;
  }
  
  return 0;
}
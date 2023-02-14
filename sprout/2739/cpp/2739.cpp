#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int input, i;

  cin >> input;
  for(i = 1; i < 10; i++)
  {
    cout << input << " * " << i << " = " << input * i << endl;
  }
  return 0;
}
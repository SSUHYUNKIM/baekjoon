#include <iostream>
using namespace std;

int main() 
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int input[8], i, a = 1, d = 1;

  for (i = 0; i < 8; i++) 
  {
    cin >> input[i];
  }

  for (i = 0; i < 8; i++) 
  {
    if (input[i] != i + 1)
    {
      a = 0;
      break;
    }
  }

  for (i = 0; i < 8; i++) 
  {
    if (input[i] != 8 - i) 
    {
      d = 0;
      break;
    }
  }

  if (a == 1) cout << "ascending" << endl;
  else if (d == 1) cout << "descending" << endl;
  else cout << "mixed" << endl;

  return 0;
}
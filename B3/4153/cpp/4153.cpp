#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  while (1)
  {
    int  temp = 0;
    cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0)
      break;

    if (a > b)
    {
      temp = b;
      b = a;
      a = temp;
    }
    if (b > c)
    {
      temp = c;
      c = b;
      b = temp;
    }

    if (a * a + b * b == c * c)
      cout << "right" << "\n";
    else
      cout << "wrong" << "\n";
  }
  
  return 0;
}
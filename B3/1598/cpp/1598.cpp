#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int a, b, x, y;
  cin >> a >> b;

  x = (a - 1) / 4 - (b - 1) / 4;
  y = (a - 1) % 4 - (b - 1) % 4; 
  cout << abs(x) + abs(y);
  
  return 0;
}
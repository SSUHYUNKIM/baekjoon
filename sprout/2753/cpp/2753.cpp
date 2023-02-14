#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int input;

  cin >> input;

  if(input % 4 == 0)
  {
    if(input % 100 == 0 && input % 400 != 0)
      cout << "0";
    else
      cout << "1";
  } 
  else
      cout << "0";
      
  return 0;
}
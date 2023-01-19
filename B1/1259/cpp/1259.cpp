#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string arr;
  int i, len, temp;

  while (1)
  {
    cin >> arr;
    if (arr[0] == '0') break;
    len = arr.size();
    temp = 1;
    for (i = 0; i < len / 2; i++)
    {
      if (arr[i] != arr[len -1 - i])
      {
        temp = 0;
        break;
      }
    }
    if(temp == 1)
      cout << "yes\n";
    else
      cout <<"no\n";
  }
  
  return 0;
}
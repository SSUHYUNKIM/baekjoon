#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string input;
  int count = 0, i;
  getline(cin, input);
  int len = input.length();

  if(len == 1)
  {
    if(input[0] == ' ')
    {
      cout << "0";
      return 0;
    }
  }

  for(i = 1; i < len-1; i++)
  {
    if(input[i] == ' ')
    {
      count++;
    }
  }

  cout << count + 1;
  
  return 0;
}
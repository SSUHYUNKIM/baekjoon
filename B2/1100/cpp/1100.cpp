#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  char chess[8][8];
  int count = 0;
  int i, j;

  for(i = 0; i < 8; i ++)
  {
    cin >> chess[i];
  }

  for(i = 0; i < 8; i++)
  {
    for(j = 0; j < 8; j++)
    {
      if((i + j) % 2 == 0)
      {
        if(chess[i][j] == 'F')
          count++;
      }
    }
  }

  cout << count;
  return 0;
}
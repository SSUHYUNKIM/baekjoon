#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, i = 1, count = 1;
  cin >> n;

  if(n == 1)
  {
    cout << "1";
    return 0;
  }

  while(1)
  {
    n -= i;
    i = count*6;
    count++;
    if(i >= n){
      break;
    }
  }

  cout << count;
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, x, i, num;

  cin >> n >> x;

  for(i = 0; i < n; i++)
  {
    cin >> num;
    if(num < x)
      cout << num <<" ";
  }
  
  return 0;
}
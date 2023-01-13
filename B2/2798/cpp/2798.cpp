#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, m, i, j, k;
  int arr[100];
  int result = 0;
  int temp = 0;
  cin >> n >> m;

  for(i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for(i = 0; i < n; i++)
  {
    for(j = i + 1; j < n; j++)
    {
      for(k = j + 1; k < n; k++)
      {
        temp = arr[i] + arr[j] + arr[k];
        if(temp > result && temp <= m)
          result = temp;
      }
    }
  }
  
  cout << result;
  return 0;
}
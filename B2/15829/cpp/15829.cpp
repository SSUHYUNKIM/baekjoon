#include <iostream>
#define M 1234567891
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int l, i;
  char arr[51];
  long long result = 0, R = 1;
  cin >> l >> arr;

  for(i = 0; i < l; i++)
  {
    result = (result + (arr[i] - 'a' + 1) * R) % M;
    R = (R * 31) % M;
  }

  cout << result << "\n";
  return 0;
}
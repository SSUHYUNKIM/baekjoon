#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int i, num, temp, result = 1;
  int arr[10] = {};

  for(i = 0; i < 3; i++)
  {
    cin >> num;
    result *= num;
  }

  for(i = 0; result > 0; i++)
  {
    temp = result % 10;
    arr[temp] += 1;
    result /= 10;
  }

  for(i = 0; i < 10; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}
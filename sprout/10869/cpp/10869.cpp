#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int a, b;

  cin >> a >> b;
  
  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;
  cout << a / b << endl;
  cout << a % b;
  return 0;
}
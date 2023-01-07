#include <iostream>

using namespace std;

int main(){
  int input, i, result = 0;
  for(i = 0; i < 5; i ++){
    cin >> input;
    result += input * input;
  }
  result %= 10;
  cout << result << endl;
  return 0;
}
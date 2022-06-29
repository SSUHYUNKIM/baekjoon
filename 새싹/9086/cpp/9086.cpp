#include <iostream>

using namespace std;

int main(){
  int t, i;
  cin >> t;
  string input;
  for(i = 0; i < t; i++){
    cin >> input;
    cout << input[0] << input[input.length() - 1] << endl;
  }
  return 0;
}
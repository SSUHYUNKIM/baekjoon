#include <iostream>
using namespace std;

int main(){
  int input, i;
  cin >> input;
  for(i = 1; i < 10; i++){
    cout << input << " * " << i << " = " << input * i << endl;
  }
  return 0;
}
#include <iostream>

using namespace std;

int main(){
  int input, i, j;
  cin >> input;

  for(i = 1; i <= input; i++){
    for(j = 1; j <= i; j++){
      cout << "*";
    }
    cout <<"\n";
  }
  
  return 0;
}
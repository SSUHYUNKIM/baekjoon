#include <iostream>
#include <string>
using namespace std;

int main(){
  string input;
  int i;
  cin >> input;
  for(i = 0; i <input.length(); i++){
    if(input[i] < 97){
      input[i] += 32;
    } else{
      input[i] -= 32;
    }
  }
  cout << input << endl;
  return 0;
}
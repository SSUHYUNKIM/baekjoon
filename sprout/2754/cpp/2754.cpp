#include <iostream>
#include <string>

using namespace std;

int main(){
  string input;
  double result = 0.0;
  cin >> input;
  switch(input[0]){
    case 'A':
      result = 4.0;
      break;
    case 'B':
      result = 3.0;
      break;
    case 'C':
      result = 2.0;
      break;
    case 'D':
      result = 1.0;
      break;
  } 
  switch (input[1]){
    case '+':
      result += 0.3;
      break;
    case '-':
      result -= 0.3;
      break;
  }
  cout<<fixed;
  cout.precision(1);
  cout << result << endl;
  return 0;
}
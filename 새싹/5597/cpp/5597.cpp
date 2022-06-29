#include <iostream>
using namespace std;
int i, input, student[31];

int main(){

  for(i = 1 ; i <= 28; i ++) {
    cin >> input;
    student[input] = 1;
  }

  for(i = 1; i <= 30; i++) {
    if(student[i] == 0) {
      cout << i << '\n';
    }
  }
}
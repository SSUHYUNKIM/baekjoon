#include <iostream>
using namespace std;

int main(){
  int i, num, max = 0, count;
  for(i = 1; i < 10; i++){
    cin >> num;
    if(max < num){
      max = num;
      count = i;
    }
  }
  cout << max << endl;
  cout << count << endl;
}
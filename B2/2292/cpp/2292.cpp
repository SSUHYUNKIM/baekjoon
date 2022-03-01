#include <iostream>
using namespace std;

int main(){
  int n, i = 1, count = 1;
  cin >> n;
  if(n == 1){
    cout << "1";
    return 0;
  }     
  while(1){
    n -= i;
    i = count*6;
    count++;
    if(i >= n){
      break;
    }
  }
  cout << count;
}
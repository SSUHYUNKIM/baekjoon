#include <iostream>
using namespace std;

int main(){
  int n, x, i, num;
  cin >> n >> x;
  for(i = 0; i < n; i++){
    cin >> num;
    if(num < x){
      cout << num <<" ";
    }
  }
  return 0;
}
#include <iostream>
using namespace std;
int input[101];

int main(){
  int n, i, v, count = 0;
  cin >> n;
  for(i = 0; i < n; i++) {
    cin >> input[i];
  }
  cin >> v;
  for(i = 0; i < n; i++){
    if(input[i] == v){
      count += 1;
    }
  }
  cout << count << endl;
  return 0;
}
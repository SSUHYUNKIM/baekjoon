#include <iostream>
using namespace std;

int main(){
  int n, i, temp;
  int x, y;
  int answer[3] = {1, 2, 3};
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> x >> y;
    temp = answer[x-1];
    answer[x-1] = answer[y-1];
    answer[y-1] = temp;
  }
  for(i = 0; i < 3; i++){
    if(answer[i] == 1){
      cout << i+1;
    }
  }
  return 0;
}
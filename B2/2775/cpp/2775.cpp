#include <iostream>
using namespace std;

int main(){
  int t, k, n, i, j;
  int arr[15][15] = {0,};

  for(i = 0; i < 15; i++){
    arr[0][i] = i;
  }

  for(i = 1; i < 15; i++){
    for(j = 1; j < 15; j++){
      arr[i][j] = arr[i-1][j] + arr[i][j-1];
    }
  }

  cin >> t;

  for(i = 0; i < t; i++){
    cin >> k >> n;
    cout << arr[k][n] << endl;
  }

  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int i, num, temp, result = 1;
  int arr[10] = {};
  for(i = 0; i < 3; i++){
    cin >> num;
    result *= num;
  }

  for(i = 0; result > 0; i++){
    temp = result % 10;
    arr[temp] += 1;
    result /= 10;
  }

  for(i = 0; i < 10; i++){
    cout << arr[i] << endl;
  }
}
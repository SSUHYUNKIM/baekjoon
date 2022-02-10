#include <iostream>
using namespace std;

double factorial(int n){
  if(n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main(){
  int t, n, m, i;
  double result = 0;
  cin >> t;

  for(i = 0; i < t; i++){
    cin >> n >> m;
    result = factorial(m) / (factorial(n) * (factorial(m-n)));
    cout.precision(0);
    cout << fixed << result << endl;
  }
 
  return 0;
}
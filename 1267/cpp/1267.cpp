#include <iostream>
using namespace std;

int main(){
  int n, usingtime, i;
  int y = 0;
  int m = 0;
  cin >> n;

  for(i =0; i < n; i++){
    cin >> usingtime;
    y += ((usingtime / 30) + 1) * 10;
    m += ((usingtime / 60) + 1) * 15;
  }

  if(y > m) cout << "M " << m;
  else if(y < m) cout << "Y " << y;
  else cout << "Y M " << y;

  return 0;
}
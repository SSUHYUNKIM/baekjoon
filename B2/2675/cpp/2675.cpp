#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
  int i, j, k, t, r;
  string s;
  cin >> t;
  for(i = 0; i < t; i++){
    cin >> r >> s;
    for(j = 0; j < s.length(); j++){
      for(k = 0; k < r; k++){
        cout << s[j];
      }
    }
    cout << endl;
  }
  return 0;
}
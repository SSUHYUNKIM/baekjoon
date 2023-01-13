#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string a, b, resulta, resultb;
  int i;
  cin >> a >> b;

  for(i = 2; i >= 0 ; i --)
  {
    resulta += a[i];
    resultb += b[i];
  }

  if(resulta > resultb) cout << resulta;
  else cout << resultb;
  
  return 0;
}
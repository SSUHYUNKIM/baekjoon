#include <iostream>
using namespace std;
int i, input, student[31];

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  for(i = 1 ; i <= 28; i ++) 
  {
    cin >> input;
    student[input] = 1;
  }
  
  for(i = 1; i <= 30; i++) 
  {
    if(student[i] == 0) {
      cout << i << '\n';
    }
  }

  return 0;
}
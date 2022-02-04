#include <iostream>
#include <string>
using namespace std;

int main(){
  int n, i;
  int check = 0;
  string name;
  int count[26]={0};

  cin >> n;

  for(i = 0; i < n; i++){
    cin >> name;
    count[name[0] - 97]++;
  }

  for(i = 0; i < 26; i++){
    if(count[i] >= 5){
      check++;
      cout << char(i + 'a');
    }
  }

  if(check == 0){
    cout << "PREDAJA";
  }
  return 0;
}
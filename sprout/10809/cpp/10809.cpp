#include <iostream>
#include <string>

using namespace std;

int main(){
    int i;
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(i=0; i<alphabet.length(); i++){
        cout << (int)s.find(alphabet[i]) << " ";
    }
    return 0;
}
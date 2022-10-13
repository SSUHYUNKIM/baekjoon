#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;
    while(getline(cin,input)){
        if(input == "") break;
        cout << input << "\n";
    }
    return 0;
}
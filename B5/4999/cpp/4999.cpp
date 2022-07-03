#include <iostream>
#include <string>
using namespace std;

int main(){
    string input, doctor;
    cin >> input;
    cin >> doctor;
    if(input.length() < doctor.length()){
        cout << "no" << endl;
    } else{
        cout << "go" << endl;
    }
    return 0;
}
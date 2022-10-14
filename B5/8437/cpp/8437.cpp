#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b;
    cin >> a>> b;
    cout << (a + b) * 0.5 << "\n";
    cout << ((a - b) * 0.5) << "\n";
    return 0;
}
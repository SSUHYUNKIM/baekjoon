#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, result = 0;
    for(int i = 0; i < 5; i++){
        cin >> a;
        result += a;
    }
    cout << result << "\n";
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, count = 0;

    cin >> n;
    
    while(true)
    {
        if (n % 5 == 0)
        {
            count += n / 5;
            cout << count << "\n";
            break;
        }

        n = n - 3;
        count++;

        if(n < 0)
        {
            cout << "-1" << "\n";
            break;
        }
    }
}
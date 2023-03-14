#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, n;
    long long result;
    
    cin >> t;

    for(int i = 0 ; i < t; i++)
    {
        result = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            result += (n / i) * i;
        }
        cout << result << "\n";
    }
    return 0;
}
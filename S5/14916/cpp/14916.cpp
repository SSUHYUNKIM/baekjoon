#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, result = 0;

    cin >> n;

    if(n < 5)
    {
        if(n % 2 == 0)
            cout << n / 2 ;
        else
            cout << -1;   
        return 0;
    }

    while(n > 0)
    {
        if(n % 5 == 0)
        {
            cout << n / 5 + result;
            return 0;
        }
        n -= 2;
        result++;
    }

    if(n == 0)
    {
        cout << result;       
    }
    else
    {
        cout << -1;
    }
    return 0;
}
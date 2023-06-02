#include <iostream>
using namespace std;

long long dp[91] = {0, };

long long fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    else if(dp[n] == 0)
        dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;

    cin >> n;

    cout << fibo(n);
    
    return 0;
}
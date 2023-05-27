#include <iostream>
using namespace std;

int solve(int a, int b)
{
    if(a > b) swap(a, b);
    if (b % a == 0) return a;
    return solve(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, min = 987654321;
    int num[3];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    min = num[0];

    for(int i = 1; i < n; i++)
    {
        min = solve(min, num[i]);
    }
    
    for(int i = 1; i <= min; i++)
    {
        if(min % i == 0)
            cout << i << '\n';
    }

    return 0;
}
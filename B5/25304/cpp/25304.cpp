#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x, n, a, b, result = 0;

    cin >> x;
    cin >> n;

    for(int i = 0 ; i < n; i++)
    {
        cin >> a >> b;
        result += a * b;
    }
    if(result == x)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}
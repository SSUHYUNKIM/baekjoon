#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, plug, result = 0;
    cin >> n;

    for(int i = 0 ; i < n; i ++)
    {
        cin >> plug;
        result += plug;
    }

    cout << result - n + 1 << endl;

    return 0;
}
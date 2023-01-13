#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, f;

    cin >> n >> f;
    n = (n / 100) * 100;

    for (int i = 0; i < 100; i++)
    {
        if((n + i) % f == 0)
        {
            n = n + i;
            if (i < 10) cout << 0;
            cout << i;
            break;
        }
    }
    
    return 0;
}
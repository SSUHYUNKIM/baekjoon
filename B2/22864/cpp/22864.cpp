#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, m, fatigue = 0, result = 0;

    cin >> a >> b >> c >> m;

    if(a > m)
    {
        cout << result;
        return 0;
    }

    for(int i = 0; i < 24; i++)
    {
        if(fatigue + a <= m)
        {
            fatigue += a;
            result += b;
        }
        else
        {
            fatigue -= c;
            if(fatigue < 0)
                fatigue = 0;
        }
    }
    cout << result;
    return 0;
}
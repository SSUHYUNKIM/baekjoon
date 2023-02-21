#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, i, j, k;
    int basket[101] = {0};

    cin >> n >> m;

    while(m--)
    {
        cin >> i >> j >> k;
        for(int o = i; o <= j; o++)
        {
            basket[o] = k;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << basket[i] << " ";
    }

    return 0;
}
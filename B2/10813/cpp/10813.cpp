#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, i, j, temp;
    int basket[101] = {0};

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        basket[i] = i;
    }

    for(int o = 1 ; o <= m ; o++)
    {
        cin >> i >> j;
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << basket[i] << " ";
    }

    return 0;
}
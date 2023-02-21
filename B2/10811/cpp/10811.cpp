#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, i, j;
    vector<int> basket(101);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        basket[i] = i;
    }

    for(int o = 1; o <= m; o++)
    {
        cin >> i >> j;
        reverse(basket.begin() + i, basket.begin() + j + 1) ;
    }

    for(int i = 1 ; i <= n; i++)
    {
        cout << basket[i] << " ";
    }
    
    return 0;
}
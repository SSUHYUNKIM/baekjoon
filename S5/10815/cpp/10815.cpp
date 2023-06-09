#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, card;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> card;
        v.push_back(card);
    }
    
    sort(v.begin(), v.end());
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> card;
        cout << binary_search(v.begin(), v.end(), card) << ' ';
    }

    return 0;
}
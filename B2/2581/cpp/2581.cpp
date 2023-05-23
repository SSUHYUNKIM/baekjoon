#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int m, n, count, sum = 0, min = -1;
    vector<int> decimal;

    cin >> m >> n;

    for(int i = m; i <= n; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
        {
            if (min == -1)
				min = i;
            sum += i;
        }
    }

    if (min == -1)
        cout << "-1" << "\n";
    else
        cout << sum << "\n" << min << "\n";
    return 0;
}
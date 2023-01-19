#include <iostream>
using namespace std;

int arr[1010][10];
int cnt[1010][1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, max = 0, result = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int k = 1; k <= 5; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j)
                    continue;
                if (arr[i][k] == arr[j][k])
                {
                    cnt[i][j] = 1;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= n; j++)
        {
            count += cnt[i][j];
        }

        if (max < count)
        {
            max = count;
            result = i;
        }
    }

    cout << result;
    return 0;
}
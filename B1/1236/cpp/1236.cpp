#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, r, c;
	char arr[50][50] = {};

    cin >> n >> m;
    r = n;
    c = m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'X')
			{
				r--;
				break;
			}
		}
	}

    for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j][i] == 'X')
			{
				c--;
				break;
			}
		}
	}

    cout << max(r, c) << endl;
    return 0;
}
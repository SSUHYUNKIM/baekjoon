#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int paper[101][101] = {0, };
    int n, x, y, result = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for(int j = x; j < x + 10; j++)
        {
            for(int k = y; k < y + 10; k++)
                paper[j][k] = 1;
        }
    }

    for(int i = 0; i <= 100; i++)
    {
        for(int j = 0 ; j <= 100; j++)
        {
            if(paper[i][j] == 1)
                result++;
        }
    }

    cout << result;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, result = 0, count = 0;

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            result = i;
            count++;
        }
        if(count == k)
            break;
    }

    if (count < k)
        cout << "0";
    else
        cout << result;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, result = 1;
    cin >> n;
    if (n == 1 || n == 0)
        cout << 1 << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        cout << result << endl;
    }
    return 0;
}
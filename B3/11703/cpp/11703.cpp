#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, sf, pr, result;
    while (true)
    {
        result = 1;
        cin >> a;
        if (a == 0)
            break;
        for (int i = 0; i < a; i++)
        {
            cin >> sf >> pr;
            result *= sf;
            result -= pr;
        }
        cout << result << "\n";
    }
    return 0;
}
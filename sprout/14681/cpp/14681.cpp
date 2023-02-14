#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b;

    cin >> a;
    cin >> b;
    if (a > 0 && b > 0)
        cout << 1 << endl;
    else if (a < 0 && b > 0)
        cout << 2 << endl;
    else if (a < 0 && b < 0)
        cout << 3 << endl;
    else
        cout << 4 << endl;
    return 0;
}
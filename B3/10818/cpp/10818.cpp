#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int i, n, num, min = 1000000, max = -1000000;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> num;
        if (num >= max)
            max = num;
        if (num <= min)
            min = num;
    }

    cout << min << " "<< max;
    return 0;
}
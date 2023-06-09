#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long s, sum = 0, num = 1;
    int count = 0;

    cin >> s;

    while(true)
    {
        sum += num;
        count++;
        num++;
        if(sum > s)
            break;
    }

    cout << count - 1;
    return 0;
}
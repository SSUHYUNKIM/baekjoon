#include <iostream>
using namespace std;

int n , k;

bool check(int num)
{
    if(num % 10 == k || num / 10 == k)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int result = 0;

    cin >> n >> k;

    for(int hour = 0; hour <= n; hour++)
    {
        for(int min = 0; min < 60; min++)
        {
            for(int sec = 0; sec < 60; sec++)
            {
                if(check(hour) || check(min) || check(sec))
                    result++;
            }
        }
    }

    cout << result;
    return 0;
}
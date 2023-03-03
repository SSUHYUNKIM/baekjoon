#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, number, count, result = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        count = 0;
        cin >> number;
        for(int j = 1; j <= number; j++)
        {
            if(number % j == 0)
                count++;
        }
        if(count == 2)
            result++;
    }

    cout << result << "\n";
    return 0;
}
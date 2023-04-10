#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int sum, score, max = 0, result;

    for(int i = 1 ; i <= 5; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> score;
            sum += score;
        }
        if(sum > max)
        {
            max = sum;
            result = i;
        }
    }

    cout << result << " " << max;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, result, num;

    while(cin >> n)
    {
        result = 1;
        num = 1;
        while(true)
        {
            if(num % n == 0)
                break;
            num = num * 10 + 1;
            num %= n;
            result++;
        }
        cout << result << "\n";
    }
    
    return 0;
}
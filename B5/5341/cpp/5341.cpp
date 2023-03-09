#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, result;

    while(true)
    {
        result = 0;
        cin >> n;
        if(n == 0)
            break;
        for(int i = n ; i > 0; i--)
        {
            result += i;
        }
        cout << result << "\n";
    }
    
    return 0;
}
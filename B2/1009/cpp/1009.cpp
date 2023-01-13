#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int testcase, a, b, temp;

    cin >> testcase;
    
    for(int i = 0; i < testcase; i++)
    {
        cin >> a >> b;
        temp = a;
        for (int j = 1; j < b ; j++)
        {
            temp = (a * temp) % 10;
        }
        if (temp % 10 == 0) cout << 10 << endl;
        else cout << temp % 10 << endl;
    }
    
    return 0;
}
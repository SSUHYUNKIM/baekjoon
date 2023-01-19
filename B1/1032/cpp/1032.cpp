#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    char a[51][51];

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i < 51 ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[0][i] != a[j][i])
            {
                a[0][i] = '?';
                break;
            }
        }
    }
    
    cout << a[0];
    return 0;
}
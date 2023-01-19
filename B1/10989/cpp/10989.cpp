#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    int number[10001] = {0};

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        number[temp]++;
    }

    for (int j = 1; j <= 10000; j++) 
    {
        for (int k = 0; k < number[j]; k++) 
        {
            cout << j << '\n';
        }
    }

    return 0;
}
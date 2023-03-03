#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, sum;

    while(true)
    {
        vector<int> temp;
        sum = 0;
        cin >> n;
        if(n == -1)
            break;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
                temp.push_back(i);
            }
        }
        if(sum == n)
        {
            cout << n << " = ";
            for(int i = 0; i < temp.size() - 1; i++)
            {
                cout << temp[i] << " + ";
            }
            cout << temp[temp.size() - 1] << '\n';
        }
        else
        {
            cout << n << " is NOT perfect." << '\n';
        }
    }
    
    return 0;
}
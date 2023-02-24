#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, temp;
    
    cin >> n;
    
    temp = n / 4;
    for(int i = 0 ; i < temp; i++)
    {
        cout << "long ";
    }

    cout << "int";
    return 0;
}
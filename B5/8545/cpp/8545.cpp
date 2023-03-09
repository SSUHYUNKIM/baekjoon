#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;

    cin >> input;

    for(int i = 2; i >= 0; i--)
    {
        cout << input[i];
    }
    
    return 0;
}
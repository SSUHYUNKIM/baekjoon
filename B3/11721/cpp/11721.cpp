#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;

    cin >> input;

    for(int i = 0; i < input.size(); i++)
    {
        cout << input[i];
        if(i % 10 == 9) cout << "\n";
    }
    return 0;
}
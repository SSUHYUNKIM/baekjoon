#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;

    while(true)
    {
        getline(cin, input);
        if(input == "END") break;
        for(int i = input.size() - 1; i >= 0; i--)
        {
            cout << input[i];
        }
        cout << "\n";
    }
    return 0;
}
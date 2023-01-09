#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    string text;
    cin >> n;
    getline(cin, text);
    for(int i = 1; i <= n; i++)
    {
        getline(cin, text);
        cout << i << ". " << text << endl;
    }

    return 0;
}
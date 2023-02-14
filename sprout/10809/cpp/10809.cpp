#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int i;
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> s;

    for(i=0; i<alphabet.length(); i++)
    {
        cout << (int)s.find(alphabet[i]) << " ";
    }
    
    return 0;
}
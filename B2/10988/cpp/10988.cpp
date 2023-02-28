#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string word;

    cin >> word;

    for(int i = 0; i < word.length() / 2; i++)
    {
        if(word[i] != word[word.length() - i - 1])
        {
            cout << "0";
            return 0;
        }
    }
    
    cout << "1";
    return 0;
}
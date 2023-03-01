#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, result = 0;
    string word;

    cin >> n;

    for(int i = 0 ; i < n; i++)
    { 
        bool check = true;
        cin >> word;
        for(int j = 0; j < word.length(); j++)
        {
            for(int k = 0; k < j; k++)
            {
                if(word[j] != word[j - 1] && word[j] == word[k])
                {
                    check = false;
                    break;
                }
            }
        }
        if(check) 
            result++;
    }

    cout << result;
    return 0;
}
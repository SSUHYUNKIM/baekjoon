#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int alphabet[26] = {0 , };
    int result = 0, count = 0, max = 0;
    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] < 97)
            alphabet[input[i] - 65]++;
        else
            alphabet[input[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(alphabet[i] > max)
        {
            max = alphabet[i];
            result = i;
            count = 0;
        }
        if(alphabet[i] == max)
            count++;
    }

    if(count > 1)
        cout << "?" << endl;
    else
        cout << (char)(result + 'A') << endl;

    return 0;
}
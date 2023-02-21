#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int result = 0;
    int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    string alphabet;

    cin >> alphabet;

    for(int i = 0 ; i < alphabet.size(); i++)
    {
        result += time[alphabet[i] - 'A'];
    }

    cout << result;
    return 0;
}
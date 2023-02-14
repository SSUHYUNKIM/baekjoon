#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int answer[6] = {1, 1, 2, 2, 2, 8};
    int input[6], i;

    for(i = 0; i < 6 ; i++)
    {
        cin >> input[i];
        cout << answer[i] - input[i] << " ";
    }
    
    return 0;
}
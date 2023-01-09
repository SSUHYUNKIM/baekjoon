#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, sum = 0;
    cin >> n;

    char arr[n];
    cin >> arr;

    for(int i = 0 ; i < n; i++)
    {
        sum += arr[i] - '0';
    }

    cout << sum << endl;
    return 0;
}
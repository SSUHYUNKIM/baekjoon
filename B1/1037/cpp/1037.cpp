#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[51] = {};
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    
    cout << arr[0] * arr[n - 1];
    return 0;
}
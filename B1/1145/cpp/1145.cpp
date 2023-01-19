#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[5] = {};
    int result = 1;

    for (int i = 0; i < 5; i++) 
    {
        cin >> arr[i];
    }

    while (1)
    {
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            if(result % arr[i] == 0)
                cnt++;
        } 
	    if (cnt >= 3)
    	    break;
        result++;	
    }

    cout << result << '\n';
    return 0;
}
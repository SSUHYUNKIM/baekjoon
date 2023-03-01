#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int row = 1, column = 1, max = 0;
    int arr[9][9] = {};

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if(max < arr[i][j])
            {
                row = i + 1;
                column = j + 1;
                max = arr[i][j];
            }
        }
    }

    cout << max << endl;
    cout << row << " " << column << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string board, result;
    int count = 0;

    cin >> board;

    for(int i = 0; i < board.size(); i++)
    {
        if(board[i] == '.')
        {
            result += ".";
            if(count % 2 != 0)
            {
                cout << -1;
                return 0;
            }         
            count = 0;
        }

        if(board[i] == 'X')
            count++;

        if(count == 2 && board[i + 1] != 'X')
        {
            result += "BB";
            count = 0;
        }
        else if(count == 4)
        {
            result += "AAAA";
            count = 0;
        }
    }
    
    if(count % 2 == 1)
        cout << -1;
    else
        cout << result;

    return 0;
}
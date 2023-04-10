#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;

    cin >> n;

    if(n == 1)
    {
        cout << "*";
        return 0;
    }

    for(int i = 0; i < 2 * n; i++)
    {
        for(int j = 0; j < n; j++)
        {
           if (i % 2 == 0)
			{
				if (j % 2 == 0)
                {
					cout << "*";
                }
				else
                {
                    cout << " ";
                }
			}
			else
			{
				if (j % 2 == 0)
                {
                    cout << " ";
                }
				else
                {
					cout << "*";
                }
			}
        }
        cout << "\n";
    }
    return 0;
}
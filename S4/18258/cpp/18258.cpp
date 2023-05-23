#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cin.sync_with_stdio(false);
    int n, number;
    string command;
    queue<int> q;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> command;

        if (command == "push") 
        {
			cin >> number;
			q.push(number);
		}
		else if (command == "pop") 
        {
			if (!q.empty())
            {
                cout << q.front() << '\n';
				q.pop();
            }
			else 
				cout << -1 << '\n';
		}
		else if (command == "size") 
        {
			cout << q.size() << '\n';
		}
		else if (command == "empty")
        {
			cout << q.empty() << '\n';
		}
		else if (command == "front") {
			if (!q.empty())
                cout << q.front() << '\n';
			else 
				cout << -1 << '\n';
        }
        else {
			if (!q.empty())
				cout << q.back() << '\n';
			else 
				cout << -1 << '\n';
        }
    }
    return 0;
}
#include <iostream>
#include<deque>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cin.sync_with_stdio(false);
    int n, number;
    string command;
    deque<int> dq;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> command;

        if (command == "push_front") 
        {
			cin >> number;
			dq.push_front(number);
		}
        else if (command == "push_back") 
        {
			cin >> number;
			dq.push_back(number);
		}
		else if (command == "pop_front") 
        {
			if (!dq.empty())
            {
                cout << dq.front() << '\n';
				dq.pop_front();
            }
			else 
				cout << -1 << '\n';
		}
        else if (command == "pop_back") 
        {
			if (!dq.empty())
            {
                cout << dq.back() << '\n';
				dq.pop_back();
            }
			else 
				cout << -1 << '\n';
		}
		else if (command == "size") 
        {
			cout << dq.size() << '\n';
		}
		else if (command == "empty")
        {
			cout << dq.empty() << '\n';
		}
		else if (command == "front") {
			if (!dq.empty())
                cout << dq.front() << '\n';
			else 
				cout << -1 << '\n';
        }
        else {
			if (!dq.empty())
				cout << dq.back() << '\n';
			else 
				cout << -1 << '\n';
        }
    }
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, temp;
    queue<int> q;

    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    cout << "<";

    while(q.size() > 1)
    {
        for(int i = 1; i < k; i++)
        {
            temp = q.front();
            q.push(temp);
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << ">\n";
    
    return 0;
}
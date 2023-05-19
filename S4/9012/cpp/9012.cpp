#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string parenthesis;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        stack<char> stack;
        cin >> parenthesis;
        for(int j = 0; j < parenthesis.length(); j++)
        {
            if(stack.empty() || parenthesis[j] == '(')
                stack.push(parenthesis[j]);
            else if(stack.top() == '(') stack.pop();
        }

        if(stack.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
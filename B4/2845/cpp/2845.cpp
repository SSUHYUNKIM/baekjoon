#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a,b,result,num[10];
    cin >> a >> b;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> num[i];
        result = num[i] - a * b;
        cout << result << " ";
    }
    
    return 0;
}
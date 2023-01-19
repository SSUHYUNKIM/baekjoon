#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d;
    int num;
    int result;
    int count=0;
    
    cin >> num;
    result = num;
    
    while(1)
    {
        a = num / 10;
        b = num % 10;
        c = (a+b) % 10;
        d = (b*10) + c;
        num = d;
        count++;
        if(d==result) 
            break;
    }

    cout << count << endl;
    return 0;
}
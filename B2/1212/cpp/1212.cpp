#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string eight;

    cin >> eight;
    int len = eight.length();
    
    for (int i = 0; i < len; i ++)
    {
        if(eight[i] == '0')
        {
            if (i == 0) cout << "0";
            else cout << "000";
        }
        if(eight[i] == '1')
        {
            if (i == 0) cout << "1";
            else cout << "001";
        }
        if(eight[i] == '2')
        {
            if (i == 0) cout << "10";
            else cout << "010";
        }
        if(eight[i] == '3')
        {
            if (i == 0) cout << "11";
            else cout << "011";
        }        
        if(eight[i] == '4') cout << "100";
        if(eight[i] == '5') cout << "101";
        if(eight[i] == '6') cout << "110";
        if(eight[i] == '7') cout << "111";  
    }
    
    return 0;
}
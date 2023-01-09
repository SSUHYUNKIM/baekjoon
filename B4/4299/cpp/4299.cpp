#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int sum, dif, s1, s2;
    cin >> sum >> dif;
    s1 = (sum + dif) / 2;
    s2 = (sum - dif) / 2;
    
    if(sum < dif || s1 + s2 != sum || abs(s1 - s2) != dif )
        cout << "-1" << endl;
    else
    {
        if(s1 < s2)
            cout << s2 << " " << s1 << endl;
        else
            cout << s1 << " " << s2 << endl;
    }

    return 0;
}
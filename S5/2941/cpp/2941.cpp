#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int index;
    string word;
    vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    cin >> word;

    for(int i = 0; i < croatian.size(); i++)
    {
        while(true)
        {
            index = word.find(croatian[i]);
            if(index == string::npos)
                break;
            word.replace(index, croatian[i].length(), "*");
        }
    }

    cout << word.length();
    return 0;
}
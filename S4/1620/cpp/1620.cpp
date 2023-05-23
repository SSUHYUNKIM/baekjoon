#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    map<string, int> pocketMonStr;
    map<int, string> pocketMonNum;
    int n, m;
    string info, question;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) 
    {
		cin >> info;
		pocketMonStr.insert(make_pair(info, i));
        pocketMonNum.insert(make_pair(i, info));
	}

    for (int i = 0; i < m; i++) 
    {
		cin >> question;
        if(isdigit(question[0]))
			cout << pocketMonNum[stoi(question)] << '\n';
		else
			cout << pocketMonStr[question] << '\n';
	}
    return 0;
}
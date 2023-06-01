#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string n;
    int b, result = 0, count = 0;
    
    cin >> n >> b;

    for (int i = n.length() - 1; i >= 0; i--) 
    {
		if (n[i] >= 'A' && n[i] <= 'Z')
			result += (n[i] - 'A' + 10) * ((int)pow(b, count));
		else
			result += (n[i] - '0') * ((int)pow(b, count));
		count++;
	}

	cout << result << '\n';
    return 0;
}
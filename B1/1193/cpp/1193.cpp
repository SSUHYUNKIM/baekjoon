#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x, i = 1;

    cin >> x;

	while (x > i) 
    {
		x -= i;
		i++;
        cout << x << " " << i << endl;
	}

	if (i % 2 == 1)
		cout << i - x + 1 << '/' << x << endl;
	else
		cout << x << '/' << i - x + 1 << endl;
    return 0;
}
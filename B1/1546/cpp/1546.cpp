#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    double max = 0, result = 0;
    double score[1000] = {0, };

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> score[i];
        if(score[i] > max)
            max = score[i];
    }

    for(int j = 0; j < n; j++) 
    {
		result += score[j] / max * 100;
	}

    cout << result / n << endl;

    return 0;
}
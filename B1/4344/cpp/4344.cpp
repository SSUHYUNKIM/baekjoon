#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int c, n, avg, over, score[1000] = {0};

    cin >> c;

    for(int i = 0 ; i < c; i++)
    {
        avg = 0;
        over = 0;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> score[j];
            avg += score[j];
        }
        avg /= n;
        for(int k = 0; k < n; k++)
        {
            if(score[k] > avg)
                over++;
        }
        cout << fixed; 
        cout.precision(3);
        cout << ((double)over / n) * 100 << "%" << endl;
    }

    return 0;
}
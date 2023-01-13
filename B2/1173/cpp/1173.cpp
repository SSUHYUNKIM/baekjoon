#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, M, t, r, pulse, result = 0;
    cin >> n >> m >> M >> t >> r;
    pulse = m;
    
    if (M - m < t)
    {
		cout << -1 << "\n";
        return 0;
    }
    
    while(true)
    {
        if(pulse + t <= M){
            pulse += t;
            n--;
        } 
        else 
        {
            pulse -= r;
            if(pulse < m) pulse = m;
        }
        result++;
        if(n == 0)
            break;
    }

    cout << result << "\n";
    return 0;
}
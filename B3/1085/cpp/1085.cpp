#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, y, w, h, min;
    cin >> x >> y >> w >> h;
    min = x;
    
    if(min > y) min = y;
    if(min > w - x) min = w - x;
    if(min > h - y) min = h - y;
    
    cout << min;
    
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int hour, minute, second, time;
    cin >> hour >> minute >> second;
    cin >> time;
    
    second += time % 60;
    minute += time / 60;
    
    if (second >= 60)
    {
        minute += second / 60;
        second %= 60;
    }
    
    if (minute >= 60)
    {
        hour += minute / 60;
        minute %= 60;
    }
    
    if (hour >= 24)
    {
        hour %= 24;
    }
    
    cout << hour << " " << minute << " " << second;
    return 0;
}
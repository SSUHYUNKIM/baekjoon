#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int hour, min, time;

    cin >> hour >> min;
    cin >> time;

    hour += time / 60;
    min += time % 60;
    
    if(min >= 60)
    {
        hour ++;
        min = min % 60;
    }
    if(hour >= 24)
        hour = hour % 24;
    
    cout << hour <<" "<< min;
    return 0;  
}
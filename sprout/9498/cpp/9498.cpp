#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int score;

    cin >> score;

    if (score >= 90)
        cout << "A";
    else if (score >= 80 && score < 90)
        cout << "B";
    else if (score >= 70 && score < 80)
        cout << "C";
    else if (score >= 60 && score < 70)
        cout << "D";
    else
        cout << "F";
    
    return 0;
}
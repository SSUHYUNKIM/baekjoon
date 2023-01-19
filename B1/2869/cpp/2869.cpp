#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, v, height = 0, result = 1;

    cin >> a >> b >> v;

    result += (v-a) / (a-b);
    if((v - a) % (a - b) != 0)
        result++;

    cout << result <<endl;
    return 0;
}
#include <iostream>
using namespace std;

int Factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return Factorial(num - 1) * num;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, result = 0;

    cin >> n >> k;
    result = Factorial(n) / (Factorial(k) * Factorial(n-k));

    cout << result;
    return 0;
}
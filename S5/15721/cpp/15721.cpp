#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, T, chant;
    int bbun = 0, degi = 0, count = 2;

    cin >> A >> T >> chant;

    while(true)
    {
        for (int i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
                bbun++;
            else
                degi++;

            if(bbun == T && chant == 0 || degi == T && chant == 1)
            {
                cout << (bbun + degi - 1) % A;
                return 0;
            }
        }

        for (int i = 0; i < count; i++)
        {
            bbun++;
            if (bbun == T && chant == 0)
            {
                cout << (bbun + degi - 1) % A;
                return 0;
            }
        }

        for (int i = 0; i < count; i++)
        {
            degi++;
            if (degi == T && chant == 1)
            {
                cout << (bbun + degi - 1) % A;
                return 0;
            }
        }
        count++;
    }
    return 0;
}
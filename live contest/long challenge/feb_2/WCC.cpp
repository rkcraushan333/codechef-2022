#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int multiplier, chef = 0, carlsen = 0;
        cin >> multiplier;
        string s;
        cin >> s;
        for (int i = 0; i < 14; i++)
        {
            if (s[i] == 'C')
                carlsen++;
            else if (s[i] == 'N')
                chef++;
            carlsen++;
            chef++;
        }
        if (carlsen == chef)
            cout << 55 * multiplier << endl;
        else if (carlsen < chef)
            cout << 40 * multiplier << endl;
        else
            cout << 60 * multiplier << endl;
    }
    return 0;
}
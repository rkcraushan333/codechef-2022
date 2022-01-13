#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b % 2 == 0)
        {
            if (a < 2)
            {
                cout << "Even" << endl;
            }
            else
            {
                cout << "Impossible" << endl;
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << "Even" << endl;
            }
            else
            {
                cout << "Odd" << endl;
            }
        }
    }
    return 0;
}
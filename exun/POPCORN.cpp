#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            int x, y;
            cin >> x >> y;
            m = max(m, x + y);
        }
        cout << m << endl;
    }
    return 0;
}
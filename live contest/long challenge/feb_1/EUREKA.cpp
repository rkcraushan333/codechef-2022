#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        double d = pow((0.143 * n), n);
        int a = floor(d);
        if ((d - a) < 0.5)
        {
            cout << a << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }
    return 0;
}
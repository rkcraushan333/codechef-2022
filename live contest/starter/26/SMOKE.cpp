#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n, x, y;
    cin >> n >> x >> y;
    int m = min((((n + 100 - 1) / 100) * x), ((n + 4 - 1) / 4) * y);
    m = min(m, ((n / 100) * x) + (((n - ((n / 100) * 100)) + 4 - 1) / 4 * y));
    cout << m << endl;
}

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        inforkc();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, sum = 0, a;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            sum += a;
        }

        int res = sum, last = 0, p = 0;
        for (int i = 0; i < n; i++)
        {
            p += v[i];
            sum -= v[i];
            last = max(p, sum);
            res = min(res, last);
        }
        cout << res << endl;
    }
    return 0;
}
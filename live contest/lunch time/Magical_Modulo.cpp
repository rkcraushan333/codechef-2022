#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, a, m1 = 0, m2;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= m1)
            {
                m1 = v[i];
                m2 = i;
            }
        }

        int x = m1 - (m2 + 1);
        if (x != 0)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = (v[i] % x);
            }
        }
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (v[i - 1] != i)
            {
                flag = false;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES"
                 << " " << x << endl;
        }
    }
    return 0;
}
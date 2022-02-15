// Permustation and combination
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void inforkc()
{
    unordered_map<int, int> m;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (m.find(a) == m.end())
            m[a] = 1;
        else
            m[a]++;
    }
    int res = 1;
    for (auto it : m)
        res = (res * (it.second + 1)) % mod;
    cout << res - 1 << endl;
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
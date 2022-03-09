#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    int mx = INT_MIN;
    for (auto k : m)
    {
        mx = max(mx, k.second);
    }
    cout << mx << endl;
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
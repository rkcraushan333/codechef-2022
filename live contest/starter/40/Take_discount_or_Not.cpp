#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, x, y, s1 = 0, s2 = 0;
    cin >> n >> x >> y;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s1 += v[i];
        s2 += max((int)0, v[i] - y);
    }
    if ((s2 + x) < s1)
    {
        cout << "COUPON" << endl;
    }
    else
        cout << "NO COUPON" << endl;
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
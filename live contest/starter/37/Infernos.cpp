#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, x;
    cin >> n >> x;
    int s = 0, t = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        s = max(s, k);
        t += (k + x - 1) / x;
    }
    cout << min(s, t) << endl;
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
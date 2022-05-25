#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int res = 0, k;
    for (int i = 0; i < n; i++)
    {
        k = v[i];
        if (k == 1)
        {
            res++;
            continue;
        }
        k--;
        int l = min((i - 0), k), r = min(k, (n - 1 - i));
        if ((l == k) && (r == k))
            res += (k + 1);
        else
        {
            int rest = (k + 1) - (2 * k - (l + r));
            int z = 0;
            res += max(z, rest);
        }
        cout << res << endl;
    }
    // cout << res << endl;
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
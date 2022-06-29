#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n, mx = INT64_MIN, mn = INT64_MAX, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i % 2 == 0)
        {
            mn = min(mn, abs(v[i]));
            sum += abs(v[i]);
        }
        else
        {
            mx = max(mx, abs(v[i]));
            sum -= abs(v[i]);
        }
    }
    cout << max(sum, sum - (2 * mn) + (2 * mx)) << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    vector<int> v(11);
    for (int i = 0; i < 11; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v[k] = v[k] + 1;
    }
    int m = 1, ans;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] >= m)
        {
            m = v[i];
            ans = i;
        }
    }
    sort(v.begin(), v.end());
    if (v[10] == v[9])
        cout << "CONFUSED" << endl;
    else
    {
        cout << ans << endl;
    }
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
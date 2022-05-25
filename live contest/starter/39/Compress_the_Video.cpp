#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    int ans = n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
            ans--;
    }
    cout << ans << endl;
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
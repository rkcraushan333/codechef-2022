#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
bool inforkc()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i < n - 1; i++)
    {
        if (((2 * v[i - 1] + v[i + 1]) == 3 * v[i]) || ((v[i - 1] + 2 * v[i + 1]) == 3 * v[i]))
        {
            continue;
        }
        else
            return false;
    }
    return true;
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        if (inforkc())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
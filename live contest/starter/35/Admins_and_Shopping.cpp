#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int sum, a, b, m = INT64_MAX;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        m = min(k, m);
    }
    sum = m * a;
    cout << ((b + sum - 1) / sum) * a << endl;
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
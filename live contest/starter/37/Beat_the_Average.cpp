#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    cout << (b * n) / (b + 1) << endl;
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
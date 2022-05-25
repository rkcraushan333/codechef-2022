#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
int inforkc()
{
    int n, res = 0;
    cin >> n;
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        res = max(res, k);
    }
    return res;
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        cout << inforkc() << endl;
    }
    return 0;
}
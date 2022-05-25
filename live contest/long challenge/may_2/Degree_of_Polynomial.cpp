#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
int inforkc()
{
    int n, k, res;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k != 0)
        {
            res = i;
        }
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
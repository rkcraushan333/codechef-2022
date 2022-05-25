#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    int a, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 != 0)
            c++;
    }
    if (c == 0 || c == n)
    {
        cout << 0 << endl;
    }
    else
    {
        if (c % 2 == 0)
        {
            cout << min(c / 2, n - c) << endl;
        }
        else
        {
            cout << n - c << endl;
        }
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
int inforkc()
{
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            res++;
    }
    if (res % 2 == 0)
    {
        return res / 2;
    }
    else
    {
        return res / 2 + 1;
    }
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
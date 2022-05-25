#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
// by inforkc
void inforkc()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
            count++;
    }
    int res = 1;
    while (count--)
    {
        res = (res * 2) % mod;
    }
    cout << res << endl;
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
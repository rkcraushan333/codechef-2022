#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
const int mod = 1e9 + 7;
int fastpow(int a, int b)
{
    if (b == 0)
        return 1;
    int t = fastpow(a, b / 2);
    if (b % 2 == 0)
        return (t * t);
    else
        return (a * t * t);
}
// by inforkc
void inforkc()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c && b == d)
    {
        cout << 0 << endl;
        return;
    }
    bool ok = 1;
    if (a == c || b == d)
        ok = 0;
    if (ok)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
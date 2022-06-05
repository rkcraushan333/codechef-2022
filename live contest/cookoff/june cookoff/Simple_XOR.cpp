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
int msb(int n)
{
    int res = 0;
    n = n >> 1;
    while (n)
    {
        res++;
        n >>= 1;
    }
    return res;
}

void inforkc()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        cout << a << " " << a + 1 << " " << a + 2 << " " << a + 3 << endl;
    }
    else if (b - a > 3)
    {
        a++;
        cout << a << " " << a + 1 << " " << a + 2 << " " << a + 3 << endl;
    }
    else
        cout << -1 << endl;
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
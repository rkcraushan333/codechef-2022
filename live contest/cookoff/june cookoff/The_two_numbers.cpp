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
    int n, res, a, b;
    cin >> n;
    a = n / 2;
    b = n / 2 + 1;
    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }
    if (n & 1)
    {
        res = ((a * b) - (int)1);
        cout << res << endl;
    }
    else
    {
        a--;
        int t = __gcd(a, b);
        if (t == 1)
        {
            res = ((a * b) - (int)1);
            cout << res << endl;
        }
        else
        {
            a--;
            b++;
            res = ((a * b) - (int)1);
            cout << res << endl;
        }
    }
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
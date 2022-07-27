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
    int x, y, z;
    cin >> x >> y;
    z = x ^ y;
    if ((x & 1) && (y & 1))
    {
        int b = 2;
        int a = x ^ 2;
        int c = y ^ 2;
        int t = a;
        a = min(a, c);
        c = max(c, t);
        cout << b << " " << a << " " << c << endl;
    }
    else if ((z & 1) && (y & 1))
    {
        int c = 2;
        int a = z ^ 2;
        int b = y ^ 2;
        int t = a;
        a = min(a, b);
        b = max(b, t);
        cout << c << " " << a << " " << b << endl;
    }
    else if ((x & 1) && (z & 1))
    {
        int a = 2;
        int b = x ^ 2;
        int c = z ^ 2;
        int t = c;
        c = min(b, c);
        b = max(b, t);
        cout << a << " " << c << " " << b << endl;
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
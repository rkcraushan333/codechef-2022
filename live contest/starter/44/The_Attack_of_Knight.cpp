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
    int x = abs(a - c), y = abs(b - d);
    if ((x == 0 || x == 2 || x == 4) && (y == 0 || y == 2 || y == 4))
    {
        if (x == y)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else if ((x == 1) && (y == 1))
    {
        if (((a == 1 || a == 8) && (b == 1 || b == 8)) || ((c == 1 || c == 8) && (d == 1 || d == 8)))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else if ((x + y) % 2 == 0 && (x <= 4 && y <= 4))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
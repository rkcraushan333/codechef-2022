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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (a < b)
        cout << b - a << endl;
    else
    {
        int k = a - b;
        if (k & 1)
        {
            cout << k / 2 + 2 << endl;
        }
        else
        {
            cout << k / 2 << endl;
        }
    }
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        inforkc();
    }
    return 0;
}
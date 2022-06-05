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
    int x = max(a, b), y = max(c, d);
    if (x > y)
        cout << "Q" << endl;
    else if (x < y)
        cout << "P" << endl;
    else
        cout << "TIE" << endl;
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
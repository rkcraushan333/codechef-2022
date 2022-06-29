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
    if (a % 3 == 0 || b % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int count = 0;
    while (true)
    {
        int aa = max(a, b);
        int bb = min(b, a);
        int k = aa - bb;
        count++;
        if (k % 3 == 0)
        {
            cout << count << endl;
            return;
        }
        a = k;
        b = bb;
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
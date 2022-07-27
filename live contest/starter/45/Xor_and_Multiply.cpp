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
    int n, a, b;
    cin >> n >> a >> b;
    // int t1, t2, t3, t4;
    int k = fastpow(2, n) - 1;
    // t1 = (max(a - 1, (int)0) ^ a) * (max(a - 1, (int)0) ^ b);
    // t2 = (max(b - 1, (int)0) ^ a) * (max(b - 1, (int)0) ^ b);
    // t3 = (min(a + 1, k) ^ a) * (min(a + 1, k) ^ b);
    // t4 = (min(b + 1, k) ^ a) * (min(b + 1, k) ^ b);
    // int m = max(t1, max(t2, max(t3, t4)));
    // if (m == t1)
    //     cout << a - 1 << endl;
    // else if (m == t2)
    //     cout << b - 1 << endl;
    // else if (m == t3)
    //     cout << a + 1 << endl;
    // else if (m == t4)
    //     cout << b + 1 << endl;
    // else
    //     cout << 0 << endl;
    int x = 0, y = a * b;
    for (int i = 0; i <= k; i++)
    {
        int t = (a ^ i) * (b ^ i);
        if (t > y)
        {
            y = t;
            x = i;
        }
        if (t == 3843)
            cout << i << endl;
    }
    cout << x << " " << y << endl;
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
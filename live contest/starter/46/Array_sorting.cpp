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
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        v1[i] = i + 1;
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a = v1[i], b = v2[i];
        if (a != b)
        {
            int d = abs(a - b);
            if (res != INT_MAX)
                res = __gcd(res, d);
            else
                res = min(res, d);
        }
    }
    cout << res << endl;
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
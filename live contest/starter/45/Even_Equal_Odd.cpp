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
    n *= 2;
    vec v1, v2;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k & 1)
            v1.push_back(k);
        else
            v2.push_back(k);
    }
    int a = v1.size(), b = v2.size();
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (a > b)
    {
        cout << ((a + b) / 2) - b << endl;
        return;
    }
    vec v;
    for (int i = 0; i < b; i++)
    {
        int t = v2[i];
        int count = 0;
        while (t % 2 == 0)
        {
            count++;
            t /= 2;
        }
        v.push_back(count);
    }
    sort(v.begin(), v.end());
    int k = ((a + b) / 2) - a;
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += v[i];
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
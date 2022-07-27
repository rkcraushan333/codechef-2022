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
    int l = INT_MAX, r = INT_MIN;
    unordered_set<int> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if ((i + 1) >= a && (i + 1) <= b)
        {
            m.insert(i + 1);
        }
        l = min(a, l);
        r = max(b, r);
    }
    int k = 0;
    for (int i = l; i <= r; i++)
    {
        if (m.find(i) != m.end())
            k++;
    }
    cout << (r - l + 1) - k << endl;
    for (int i = l; i <= r; i++)
    {
        if (m.find(i) == m.end())
            cout << i << endl;
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
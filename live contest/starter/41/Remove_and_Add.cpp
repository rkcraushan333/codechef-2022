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
    unordered_map<int, int> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int res = 0, l = 0, r = 0;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (m[arr[i]] > 1)
        {
            m[arr[i]]--;
            l++;
        }
        if (m[arr[j]] > 1)
        {
            m[arr[j]]--;
            r++;
        }
        i++;
        j--;
    }
    res = min(2 * l + r, 2 * r + l);
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc

void inforkc()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v1[i] ^ v2[i]]++;
    }
    for (auto it : m)
    {
        if (it.second > 1)
            count += ((it.second) * (it.second - 1)) / 2;
    }
    cout << count << endl;
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
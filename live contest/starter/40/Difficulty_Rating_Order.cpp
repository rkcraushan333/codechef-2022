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
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    v2 = v1;
    sort(v2.begin(), v2.end());
    if (v1 == v2)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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
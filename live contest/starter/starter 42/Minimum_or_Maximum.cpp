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
    int a;
    cin >> a;
    vec v(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    bool check = true;
    int mn = v[0], Mx = v[0];
    for (int i = 1; i < a; i++)
    {
        if (v[i] <= mn)
            mn = v[i];
        else if (v[i] >= Mx)
            Mx = v[i];
        else
        {
            check = false;
            break;
        }
    }
    if (check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
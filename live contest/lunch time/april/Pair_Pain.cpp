#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
int fac(int n)
{
    if (n == 0)
        return 1;

    return n * fac(n - 1);
}
void inforkc()
{
    int n, one = 0, two = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            one++;
        if (v[i] == 2)
            two++;
    }
    if (one == 0 && two < 2)
    {
        cout << 0 << "\n";
        return;
    }
    int sum = 0, k = n - 1;
    while (one--)
    {
        sum += (k);
        k--;
    }
    if (two > 1)
    {
        sum += (fac(two) / (2 * (fac(two - 2))));
    }
    cout << sum << endl;
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
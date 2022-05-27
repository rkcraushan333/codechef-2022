#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    n--;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (n < 4)
    {
        cout << 1 << endl;
        return;
    }
    int k = n / 5;
    if ((n - k * 5) == 0)
    {
        cout << k * 2 << endl;
    }
    else if ((n - k * 5) < 4)
    {
        cout << k * 2 + 1 << endl;
    }
    else
    {
        cout << k * 2 + 2 << endl;
    }
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
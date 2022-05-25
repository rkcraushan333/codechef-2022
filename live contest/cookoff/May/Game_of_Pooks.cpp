#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n < 4)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << n << endl;
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
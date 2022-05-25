#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c < a)
    {
        cout << 0 << endl;
    }
    else if (c < a + b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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
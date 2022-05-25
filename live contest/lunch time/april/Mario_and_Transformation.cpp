#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    if (n % 3 == 1)
        cout << "HUGE" << endl;
    else if (n % 3 == 2)
    {
        cout << "SMALL" << endl;
    }
    else
    {
        cout << "NORMAL" << endl;
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
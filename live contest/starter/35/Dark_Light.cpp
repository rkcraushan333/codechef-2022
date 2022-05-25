#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    if (a % 4 == 0)
    {
        if (b == 0)
        {
            cout << "Off" << endl;
        }
        else if (b == 1)
        {
            cout << "On" << endl;
        }
    }
    else
    {
        if (b == 1)
            cout << "Ambiguous" << endl;
        else if (b == 0)
            cout << "On" << endl;
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
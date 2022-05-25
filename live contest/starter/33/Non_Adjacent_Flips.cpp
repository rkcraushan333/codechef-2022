#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool odd = false, even = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (s[i + 1] == '1' && i < n)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }
    }
    if (odd == false && even == false)
    {
        cout << 0 << endl;
    }
    else if (even == true && odd == true)
        cout << 2 << endl;
    else
    {
        cout << 1 << endl;
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
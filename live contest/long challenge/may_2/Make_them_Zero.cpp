#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        res |= in;
    }
    int count = 0;
    while (res)
    {
        if (res % 2)
        {
            count++;
        }
        res >>= 1;
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
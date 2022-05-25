#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    cout << max((500 - 2 * a) + (1000 - 4 * (a + b)), (500 - 2 * (a + b) + (1000 - 4 * b))) << endl;
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
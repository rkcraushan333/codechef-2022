#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int x, y;
    cin >> x >> y;
    if ((x * 100) >= (y * 10))
        cout << "Cloth" << endl;
    else
    {
        cout << "Disposable" << endl;
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
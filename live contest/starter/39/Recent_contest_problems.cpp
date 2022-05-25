#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "START38")
            a++;
        else
            b++;
    }
    cout << a << " " << b << endl;
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
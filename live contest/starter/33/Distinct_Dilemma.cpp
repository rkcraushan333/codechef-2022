#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n, a, sum = 0, k = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    while ((k * (k + 1)) / 2 <= sum)
    {
        k++;
    }
    cout << k - 1 << endl;
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
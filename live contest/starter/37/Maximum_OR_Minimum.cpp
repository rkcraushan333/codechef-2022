#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int final = v[0] & v[1], k = n - 2;
    int i = 2, j = n - 1;
    while (k--)
    {
        if (j > i)
        {
            final = final | v[j];
            j--;
            k--;
        }
        if (i < j)
        {
            final = final & v[i];
            i++;
        }
    }
    cout << final << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
const int mod = 1e9 + 7;
int fastpow(int a, int b)
{
    if (b == 0)
        return 1;
    int t = fastpow(a, b / 2);
    if (b % 2 == 0)
        return (t * t);
    else
        return (a * t * t);
}
// by inforkc
void inforkc()
{
    int n;
    cin >> n;
    int count = 0;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (v[i] == '(' && v[j] == ')')
        {
            count++;
            i++;
            j--;
        }
        else if (v[i] == ')')
            i++;
        else if (v[j] == '(')
            j--;
    }
    count *= 2;
    cout << n - count << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
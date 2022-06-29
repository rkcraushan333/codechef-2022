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
    string s;
    cin >> s;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == '0')
        {
            if (s[i + 1] == '0')
                cout << 'A';
            else
                cout << 'T';
        }
        else
        {
            if (s[i + 1] == '0')
                cout << 'C';
            else
                cout << 'G';
        }
    }
    cout << endl;
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
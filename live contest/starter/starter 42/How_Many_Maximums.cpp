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
    int a;
    cin >> a;
    a--;
    string s;
    cin >> s;
    if (a == 1)
    {
        cout << 1 << endl;
        return;
    }
    int count = 0;
    for (int i = 0; i < a - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            count++;
    }
    if (s[0] == '1')
        count++;
    if (s[a - 1] == '0')
        count++;
    cout << count << endl;
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
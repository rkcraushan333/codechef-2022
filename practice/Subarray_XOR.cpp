#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

unordered_map<string, int> m;

void pass(string s, string t = "")
{
    if (s.empty())
    {
        if (t != "")
            // m[t]++;
            cout << t << endl;
        return;
        string op1, op2;
        op1 += t;
        op2 += s[0];
        s.erase(0, 1);
        pass(s, op1);
        pass(s, op2);
    }
}

void inforkc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    pass(s);
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
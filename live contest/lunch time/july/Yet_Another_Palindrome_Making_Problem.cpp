#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
// by inforkc
bool ispalindromic(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
void inforkc()
{
    int n;
    string s;
    cin >> n >> s;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    for (auto i : m)
    {
        if (i.second & 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (ispalindromic(s))
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int k = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (i != j && s[i] == s[j])
            {
                if (abs(i - j) & 1)
                    k = abs(i - j);
            }
        }
        if (k == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
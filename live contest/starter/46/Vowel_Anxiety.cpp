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
    string s;
    cin >> n >> s;
    deque<char> q;
    q.push_back(s[0]);
    int c = 1;
    unordered_set<char> m;
    m.insert('a');
    m.insert('e');
    m.insert('i');
    m.insert('o');
    m.insert('u');
    int t;
    for (int i = 1; i < n; i++)
    {
        if (m.find(s[i]) != m.end())
            c++;
        if (c & 1)
        {
            q.push_back(s[i]);
            if (i == n - 1)
            {
                t = 0;
            }
        }
        else
        {
            q.push_front(s[i]);
            if (i == n - 1)
                t = 1;
        }
    }
    if (t == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << q.front();
            q.pop_front();
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << q.back();
            q.back();
            q.pop_back();
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>

// by inforkc
void inforkc()
{
    int a, b;
    cin >> a >> b;
    if (b == 1)
    {
        int t = a;
        while (t--)
        {
            cout << 'a';
        }
        cout << endl;
        return;
    }
    int k = (a + 1) / 2;
    if (b > k)
    {
        cout << -1 << endl;
        return;
    }
    if (a % 2 != 0)
    {
        vector<char> v;
        char c = 'a';
        for (int i = 0; i < b - 1; i++)
        {
            cout << c;
            v.push_back(c);
            c++;
        }
        int d = a - (2 * (b - 1));
        while (d--)
        {
            cout << c;
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }
    if (a % 2 == 0)
    {
        vector<char> v;
        char c = 'a';
        for (int i = 0; i < b - 1; i++)
        {
            cout << c;
            v.push_back(c);
            c++;
        }
        int d = 2 * (k - b + 1);
        while (d--)
        {
            cout << c;
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
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
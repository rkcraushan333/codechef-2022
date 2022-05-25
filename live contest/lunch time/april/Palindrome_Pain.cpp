#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void inforkc()
{
    int x, y;
    cin >> x >> y;
    if (((x & 1) && (y & 1)) || (x == 1) || (y == 1))
    {
        cout << -1 << endl;
        return;
    }
    if (x % 2 == 0 && y % 2 == 0)
    {
        int k1 = x / 2, k2 = y / 2;
        for (int i = 0; i < k1; i++)
            cout << 'a';
        for (int i = 0; i < y; i++)
            cout << 'b';
        for (int i = 0; i < k1; i++)
            cout << 'a';

        cout << endl;

        for (int i = 0; i < k2; i++)
            cout << 'b';
        for (int i = 0; i < x; i++)
            cout << 'a';
        for (int i = 0; i < k2; i++)
            cout << 'b';
        cout << endl;
        return;
    }
    if (x % 2 != 0 && y % 2 == 0)
    {
        int k1 = x / 2, k2 = y / 2;
        for (int i = 0; i < k2; i++)
            cout << 'b';
        for (int i = 0; i < x; i++)
            cout << 'a';
        for (int i = 0; i < k2; i++)
            cout << 'b';
        cout << endl;

        for (int i = 0; i < k1; i++)
            cout << 'a';
        for (int i = 0; i < k2; i++)
            cout << 'b';
        cout << 'a';
        for (int i = 0; i < k2; i++)
            cout << 'b';
        for (int i = 0; i < k1; i++)
            cout << 'a';
        cout << endl;
        return;
    }
    if (x % 2 == 0 && y % 2 != 0)
    {
        int k1 = x / 2, k2 = y / 2;
        for (int i = 0; i < k2; i++)
            cout << 'a';
        for (int i = 0; i < x; i++)
            cout << 'b';
        for (int i = 0; i < k2; i++)
            cout << 'a';
        cout << endl;

        for (int i = 0; i < k1; i++)
            cout << 'b';
        for (int i = 0; i < k2; i++)
            cout << 'a';
        cout << 'b';
        for (int i = 0; i < k2; i++)
            cout << 'a';
        for (int i = 0; i < k1; i++)
            cout << 'b';
        cout << endl;
        return;
    }
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
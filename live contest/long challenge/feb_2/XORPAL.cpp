#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, one = 0, zero = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        if (n % 2)
        {
            if ((zero % 2 == 0 && one % 2 != 0) || (one % 2 == 0 && zero % 2 != 0))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (zero % 2 == 0 || zero == one)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
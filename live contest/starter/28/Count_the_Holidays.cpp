#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n, d;
    cin >> n;
    int res = 8 + n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if (d == 6 || d == 7 || d == 13 || d == 14 || d == 20 || d == 21 || d == 27 || d == 28)
            res--;
    }
    cout << res << endl;
}

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        inforkc();
    }
    return 0;
}
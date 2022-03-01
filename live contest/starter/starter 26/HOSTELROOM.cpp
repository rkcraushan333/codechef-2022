#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n, x;
    cin >> n >> x;
    int res = x, curr = x;
    while (n--)
    {
        int in;
        cin >> in;
        curr += in;
        res = max(res, curr);
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
#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(b, a + c) << endl;
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
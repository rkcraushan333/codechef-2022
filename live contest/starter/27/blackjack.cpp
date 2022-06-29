#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int a, b, c;
    cin >> a >> b;
    c = 21 - (a + b);
    if (c >= 1 && c <= 10)
        cout << c << endl;
    else
        cout << -1 << endl;
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
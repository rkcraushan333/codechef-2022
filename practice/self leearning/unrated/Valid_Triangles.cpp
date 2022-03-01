#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c == 180)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int b, c;
    cin >> b >> c;
    int k = __gcd(b, c);
    k = ((b * c) / k);
    cout << k / b << endl;
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
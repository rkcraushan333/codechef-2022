#include <bits/stdc++.h>
using namespace std;
#define int long long
const long M = 1000000007;

void inforkc()
{
    int n, rev = 0;
    cin >> n;
    while (n)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    cout << rev << endl;
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
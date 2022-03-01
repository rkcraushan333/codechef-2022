#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n;
    cin >> n;
    int sum = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    sum += n;
    cout << sum << endl;
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
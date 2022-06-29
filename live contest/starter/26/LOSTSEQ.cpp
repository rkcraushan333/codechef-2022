#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n;
    cin >> n;
    int odd = 0;
    n *= 2;
    while (n--)
    {
        int in;
        cin >> in;
        if (in % 2)
            odd++;
    }
    if (odd % 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
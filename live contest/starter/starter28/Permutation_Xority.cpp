#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    if (n & 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    int i;
    for (i = 1; i <= n - 3; i++)
    {
        cout << i << " ";
    }
    cout << i + 2 << " " << i
         << " " << i + 1 << endl;
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
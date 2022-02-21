#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n, k, i = 1;
    cin >> n >> k;
    while (k--)
    {
        int a;
        cin >> a;
        cout << a << " ";
        while (i < a)
        {
            cout << i++ << " ";
        }
        i++;
    }
    cout << endl;
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
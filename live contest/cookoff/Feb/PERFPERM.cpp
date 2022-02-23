// UNSOLVED
#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);
    int count = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % i + 1 == 0)
            count++;

    if (count != k)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
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
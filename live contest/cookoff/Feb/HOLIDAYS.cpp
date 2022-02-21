#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int count = 0, sum = 0, j = n - 1;
    while (sum < w)
    {
        sum += v[j--];
        count++;
    }
    cout << n - count << endl;
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
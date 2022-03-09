#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
void inforkc()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        b *= 2;
        vector<int> v1(b);
        for (int i = 0; i < b; i++)
            cin >> v1[i];
        for (int i = 0; i < b - 1; i += 2)
        {
            v[v1[i + 1] - 1] = (v[v1[i + 1] - 1] + (v[a - 1] * v1[i])) % mod;
        }
        v[a - 1] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
}

signed main()
{
    inforkc();
    return 0;
}
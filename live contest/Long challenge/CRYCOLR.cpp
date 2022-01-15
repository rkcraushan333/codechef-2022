#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int R[3], G[3], B[3], r, g, b, result, zero = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> R[i];
            if (R[i] == 0)
            {
                zero++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> G[i];
            if (G[i] == 0)
            {
                zero++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> B[i];
            if (B[i] == 0)
            {
                zero++;
            }
        }
        r = n - R[0];
        g = n - G[1];
        b = n - B[2];
        result = max(r, g);
        result = max(result, b);
    }
    return 0;
}
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int sum = 0, check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum = sum + v[i];
        }
        sort(v.begin(), v.end(), compare);
        if (sum < x)
        {
            check = -1;
        }
        else
        {
            for (int i = 0; x > 0; i++)
            {
                x -= v[i];
                check++;
            }
        }
        cout << check << endl;
    }
    return 0;
}
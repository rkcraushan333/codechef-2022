#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int b[], int res, int sum)
{
    for (int i = 0; i < 3; i++)
    {
        int ans = sum + b[i] - a[i];
        if (ans >= res)
            return true;
    }
    return false;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a[3], b[3], sum = 0, res = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
            res += b[i];
        }
        res = ((res / 2) + 1);
        if (check(a, b, res, sum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

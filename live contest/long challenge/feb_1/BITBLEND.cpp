// wrong
#include <bits/stdc++.h>
using namespace std;
void check(int n)
{
    vector<int> v(n);
    int even = 0, odd = 0, c;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even++;
        else
        {
            c = i;
            odd++;
        }
    }
    if (even == n || odd == n)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((v[i] % 2 != 0) && (v[i + 1] % 2 != 0))
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ceil(even / 2) << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        check(n);
    }
    return 0;
}
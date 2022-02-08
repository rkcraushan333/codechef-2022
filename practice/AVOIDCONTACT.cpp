#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> m >> n;
        if (m == n && m > 0)
            cout << n * 2 - 1 << endl;
        else
            cout << (n * 2) + (m - n) << endl;
    }
    return 0;
}
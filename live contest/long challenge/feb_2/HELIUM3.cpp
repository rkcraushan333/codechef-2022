#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a1, b1, c1, d1;
        cin >> a1 >> b1 >> c1 >> d1;
        int k = (c1 * d1) - (a1 * b1);
        if (k >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int p, q;
        cin >> p >> q;
        if (q)
            cout << (q % p) << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
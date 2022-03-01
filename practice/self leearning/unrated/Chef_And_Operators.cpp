#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << ">" << endl;
    else if (a < b)
        cout << "<" << endl;
    else
        cout << "=" << endl;
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
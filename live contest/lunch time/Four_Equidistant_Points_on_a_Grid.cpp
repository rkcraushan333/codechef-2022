#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n & 1)
        cout << -1 << endl;
    else
    {
        cout << 1 << " " << 1 + (n / 2) << endl;
        cout << 1 + (n / 2) << " " << 1 << endl;
        cout << 1 + (n / 2) << " " << 1 + n << endl;
        cout << 1 + n << " " << 1 + (n / 2) << endl;
    }
    return 0;
}
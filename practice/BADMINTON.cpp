#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a;
        cin >> a;
        if (a % 2)
            cout << 0 << " " << 1 << " " << a << endl;
        else
            cout << 0 << " " << 2 << " " << a << endl;
    }
    return 0;
}
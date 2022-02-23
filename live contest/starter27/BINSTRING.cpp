#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        count++;
        while (i < n && s[i + 1] == c)
        {
            i++;
        }
    }
    cout << count << "\n";
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
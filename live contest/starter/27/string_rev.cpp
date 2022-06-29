#include <bits/stdc++.h>
using namespace std;
#define int long long

void inforkc()
{
    string s;
    cin >> s;
    int n = s.size();
    char str[n];
    for (int i = 0; i < n; i++)
    {
        str[i] = s[n - i - 1];
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        count1++;
        if (str[i] != s[i])
        {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        count2++;
        if (str[i] != s[i])
        {
            break;
        }
    }
    cout << n - count1 << endl;
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
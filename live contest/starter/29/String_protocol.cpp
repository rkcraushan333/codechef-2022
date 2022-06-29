#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, count = 0;
    while (i < n)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            i += 2;
        }
        else
        {
            count++;
            i++;
        }
    }
    cout << count << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
            count++;
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
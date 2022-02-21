#include <bits/stdc++.h>
using namespace std;
#define int long long
bool compare(char a, char b)
{
    return a > b;
}
void inforkc()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), compare);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
    }
    cout << endl;
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
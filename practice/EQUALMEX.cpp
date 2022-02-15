#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            return false;
        if (v[i] == 0)
            return true;
    }
    return true;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int t = 2 * n;
        vector<int>
            v(t);
        vector<int> s(n + 1, 0);
        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
            s[v[i]]++;
        }
        cout << s.size();
        if (check(s, s.size()))
            cout
                << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
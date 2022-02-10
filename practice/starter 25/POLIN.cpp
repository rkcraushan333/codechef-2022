#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int h = 0, v = 0, n;
        cin >> n;
        unordered_set<int> s1;
        unordered_set<int> s2;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (!s1.count(a))
            {
                h++;
                s1.insert(a);
            }
            if (!s2.count(b))
            {
                v++;
                s2.insert(b);
            }
        }
        cout << h + v << endl;
    }
    return 0;
}
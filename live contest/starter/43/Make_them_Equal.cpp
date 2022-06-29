#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
// by inforkc
bool check(int a, int b, int c)
{
    for (int i = 0; i < 32; i++)
    {
        int x = (a >> i) & 1, y = (b >> i) & 1, z = (c >> 1) & 1;
        if (x & y & z)
            return false;
        else if (!(x) && !(y) && !(z))
            return false;
        else
        {
            if (x & y)
            {
                c += pow(2, i);
            }
            else if (y & z)
            {
                a += pow(2, i);
            }
            else if (x & z)
            {
                b += pow(2, i);
            }
            else if (x)
            {
                a += pow(2, i);
            }
            else if (y)
            {
                b += pow(2, i);
            }
            else if (z)
            {
                c += pow(2, i);
            }
            if ((a == b) && (b == c))
            {
                return true;
            }
        }
    }
    return false;
}
void inforkc()
{
    int a, b, c;
    if (check(a, b, c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
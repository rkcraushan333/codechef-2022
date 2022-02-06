#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tesT;
    cin >> tesT;
    while (tesT--)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] != str[n - 1 - i])
            {
                count++;
            }
        }
        if (k >= count && n % 2 == 0)
        {
            if (count == k || (k - count) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (k >= count && n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
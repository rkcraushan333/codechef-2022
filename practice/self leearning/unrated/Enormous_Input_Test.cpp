#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, a;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % k == 0)
            count++;
    }
    cout << count;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// by inforkc
int main()
{

    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        int in;
        cin >> in;
        if (in > 9)
            res++;
    }
    cout << res << endl;
    return 0;
}
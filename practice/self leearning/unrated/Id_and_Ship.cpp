#include <bits/stdc++.h>
using namespace std;
#define int long long
void inforkc()
{
    char c;
    cin >> c;
    if (c == 'B' || c == 'b')
        cout << "BattleShip" << endl;
    else if (c == 'C' || c == 'c')
        cout << "Cruiser" << endl;
    else if (c == 'D' || c == 'd')
        cout << "Destroyer" << endl;
    else
        cout << "Frigate" << endl;
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
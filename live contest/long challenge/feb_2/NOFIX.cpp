#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int no;
        cin >> no;
        vector<int> v(no);
        for (int i = 0; i < no; i++)
        {
            cin >> v[i];
        }
        int count = 0, k = 1;
        for (int i = 0; i < no; i++)
        {
            if (v[i] == i + k)
            {
                count++;
                k++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
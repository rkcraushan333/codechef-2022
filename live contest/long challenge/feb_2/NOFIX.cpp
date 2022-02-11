#include <bits/stdc++.h>
using namespace std;
int k;
bool check(int n, vector<int> arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            k = i;
            return true;
        }
    }
    return false;
}
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
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
// by inforkc
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void inforkc()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == 0)
        {
            addEdge(adj, a, b);
        }
    }
    int count = 0;
    for (auto x : adj[1])
        count += adj[x].size();
    if ()
}

signed main()
{
    int t_e_s_t;
    cin >> t_e_s_t;
    while (t_e_s_t--)
    {
        inforkc();
    }
    return 0;
}
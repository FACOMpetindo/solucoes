#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define F first
#define S second

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define endl "\n"
#define int long long
#define tiii tuple<int, int, int>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int MAXN = 1e6;
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> adj(n + 1);
    vector<int> dist(n + 1, LLONG_MAX);

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
    }

    dist[1] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, 1});
    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();

        if (dist[u] != d)
            continue;

        for (auto [v, w] : adj[u])
        {
            if (dist[v] > d + w)
            {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << dist[n] << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin >> t;
    while (t--)
    {
        solve();
    }
}
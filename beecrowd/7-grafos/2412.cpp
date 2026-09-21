#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second

#define inf 10e9
#define MAX 1e5
#define endl "\n"
#define ll long long

using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> arvs(n);

    FOR(i, n)
    {
        int x, y;
        cin >> x >> y;
        arvs[i] = {x, y};
    }

    vector<int> grafo[1001];
    FOR(i, n)
    {
        for (int j = i + 1; j < n; j++)
        {
            double dist = sqrt(pow((arvs[j].F - arvs[i].F), 2) +
                               pow((arvs[j].S - arvs[i].S), 2));
            if (dist <= d)
            {
                grafo[i].pb(j);
                grafo[j].pb(i);
            }
        }
    }

    vector<bool> visitado(n, false);
    queue<int> fila;
    fila.push(0);
    visitado[0] = true;
    while (!fila.empty())
    {
        int u = fila.front();
        fila.pop();

        for (auto v : grafo[u])
        {
            if (!visitado[v])
            {
                visitado[v] = true;
                fila.push(v);
            }
        }
    }

    FOR(i, n)
    {
        if (!visitado[i])
        {
            cout << "N" << endl;
            return;
        }
    }
    cout << "S" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; // cin >> t;

    while (t--)
    {
        solve();
    }
}
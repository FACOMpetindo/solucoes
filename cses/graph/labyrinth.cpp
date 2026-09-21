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

vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
map<int, char> mapa = {
    {0, 'D'},
    {1, 'U'},
    {2, 'R'},
    {3, 'L'}};

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    FOR(i, n)
    {
        cin >> grid[i];
    }

    pair<int, int> start;
    pair<int, int> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'A')
                start = {i, j};
            else if (grid[i][j] == 'B')
                target = {i, j};
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m));
    vector<vector<char>> path(n, vector<char>(m));

    queue<pair<int, int>> fila;
    fila.push(start);
    bool caminho = false;
    while (!fila.empty())
    {
        auto atual = fila.front();
        fila.pop();

        if (atual == target)
        {
            caminho = true;
            break;
        }

        for (int i = 0; i < 4; i++)
        {
            auto mov = moves[i];
            int mx = atual.F + mov.F;
            int my = atual.S + mov.S;

            if (mx < 0 || my < 0 || mx >= n || my >= m || grid[mx][my] == '#')
            {
                continue;
            }

            if (!vis[mx][my])
            {
                vis[mx][my] = true;
                parent[mx][my] = atual;
                path[mx][my] = mapa[i];
                fila.push({mx, my});
            }
        }
    }

    if (!caminho)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<char> trace;
    if (caminho)
    {
        auto atual = target;
        while (atual != start)
        {
            trace.pb(path[atual.F][atual.S]);
            atual = parent[atual.F][atual.S];
        }
        reverse(trace.begin(), trace.end());
    }

    cout << trace.size() << endl;
    for (int i = 0; i < trace.size() - 1; i++)
    {
        cout << trace[i] << "";
    }
    cout << trace[trace.size() - 1] << endl;
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
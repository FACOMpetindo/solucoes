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

vector<int> pai;

void initSet()
{
    iota(pai.begin(), pai.end(), 0);
}

int find(int x)
{
    return (x == pai[x] ? x : pai[x] = find(pai[x]));
}

void join(int x, int y)
{
    pai[find(x)] = find(y);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    pai.assign(n + 1, 0);
    initSet();

    FOR(i, m)
    {
        char op;
        cin >> op;

        int u, v;
        cin >> u >> v;

        if (op == 'C')
        {
            if (find(u) == find(v))
                cout << "S" << endl;
            else
                cout << "N" << endl;
        }
        else
        {
            join(u, v);
        }
    }
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
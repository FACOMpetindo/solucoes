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

map<string, string> pai;

string find(string x)
{
    return (x == pai[x] ? x : pai[x] = find(pai[x]));
}

void join(string x, string y)
{
    pai[find(x)] = find(y);
}

void solve()
{
    int n, m;
    cin >> n >> m;

    FOR(i, m)
    {
        string p1, _, p2;
        cin >> p1 >> _ >> p2;

        if (!pai.count(p1))
            pai[p1] = p1;
        if (!pai.count(p2))
            pai[p2] = p2;
        join(p1, p2);
    }

    set<string> familias;
    for (auto [chave, valor] : pai)
    {
        familias.insert(find(chave));
    }
    cout << familias.size() << endl;
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
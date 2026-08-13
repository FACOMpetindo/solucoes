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
    int qtd = n * m;

    vector<string> problemas(qtd);

    for (int i = 0; i < qtd; i++)
    {
        cin >> problemas[i];
    }

    sort(problemas.begin(), problemas.end(), [](string a, string b)
         {
        // Problemas de vida vêm primeiro
        if (a[1] != b[1])
            return a[1] == 'V';

        // Depois, maior criticidade primeiro
        return a[0] > b[0]; });

    for (string p : problemas)
    {
        cout << p << endl;
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
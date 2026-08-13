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
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a * m <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        int soma = 0;
        int qtd = n / m;
        soma += qtd * b;
        n %= m;
        // cout << n << endl;
        if (n > 0)
        {
            soma += min(n * a, b);
        }
        cout << soma << endl;
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
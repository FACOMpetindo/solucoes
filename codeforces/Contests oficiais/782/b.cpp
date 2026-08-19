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
    int n;
    cin >> n;

    vector<double> x(n), v(n);

    FOR(i, n)
        cin >> x[i];
    FOR(i, n)
        cin >> v[i];

    auto possivel = [&](double tempo)
    {
        double L = -1e18;
        double R = 1e18;

        FOR(i, n)
        {
            L = max(L, x[i] - v[i] * tempo);
            R = min(R, x[i] + v[i] * tempo);
        }

        return L <= R;
    };

    double ini = 0;
    double fim = 1e9;

    for (int iteracao = 0; iteracao < 100; iteracao++)
    {
        double meio = (ini + fim) / 2.0;

        if (possivel(meio))
        {
            fim = meio;
        }
        else
        {
            ini = meio;
        }
    }

    cout << fixed << setprecision(12) << fim << endl;
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
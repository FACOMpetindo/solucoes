#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define F first
#define S second

#define INF 0x3f3f3f3f
#define endl "\n"
#define int long long

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int MAXN = 5 * 1e5;
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> numeros(n);
    FOR(i, n)
    {
        cin >> numeros[i];
    }

    int maior = 0, soma = 0, l = 0;
    for (int r = 0; r < n; r++)
    {
        soma += numeros[r];
        while (soma > t)
        {
            soma -= numeros[l];
            l++;
        }
        maior = max(maior, r - l + 1);
    }

    cout << maior << endl;
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
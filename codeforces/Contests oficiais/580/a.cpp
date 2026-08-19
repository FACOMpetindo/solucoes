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

    vector<int> numeros(n);
    FOR(i, n)
    {
        cin >> numeros[i];
    }

    int temp = 0, ans = 0, last = numeros[0];

    for (int i = 0; i < n; i++)
    {
        if (numeros[i] >= last)
        {
            temp++;
        }
        else
        {
            ans = max(ans, temp);
            temp = 1;
        }
        last = numeros[i];
    }
    ans = max(ans, temp);

    cout << ans << endl;
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
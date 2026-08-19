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
#define tii tuple<int, int, int>

#define yes cout << "yes" << endl
#define no cout << "no" << endl

using namespace std;

ll n, t;
vector<ll> numeros;

bool f(ll m)
{
    ll total = 0;
    for (ll x : numeros)
    {
        if (x > m)
            continue;
        total += m / x;
        if (total >= t)
            return true;
    }
    return false;
}

void solve()
{
    cin >> n >> t;
    numeros.resize(n);

    FOR(i, n)
    {
        cin >> numeros[i];
    }

    ll l = 0, r = LONG_MAX;
    while (r > l + 1)
    {
        ll m = (r + l) / 2;

        if (f(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k = 1; // cin >> t;

    while (k--)
    {
        solve();
    }

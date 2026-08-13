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
    int menor = 11;

    int x;
    cin >> x;

    while (x != 0)
    {
        menor = min(menor, x % 10);
        x /= 10;
    }

    cout << menor << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
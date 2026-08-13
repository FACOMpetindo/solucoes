#include <bits/stdc++.h>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define F first
#define S second

#define inf 10e9
#define MAXN 100005
#define MOD 1e9 + 7
#define endl "\n"

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

void solve()
{
    int n;
    while (cin >> n && n)
    {
        deque<int> fila;

        for (int i = 1; i <= n; i++)
        {
            fila.push_back(i);
        }

        cout << "Discarded cards:";

        while (fila.size() > 1)
        {
            cout << ' ' << fila.front();
            fila.pop_front();

            fila.push_back(fila.front());
            fila.pop_front();

            if (fila.size() > 1)
            {
                cout << ',';
            }
        }

        cout << "\nRemaining card: " << fila.front() << endl;
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

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
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<char> ans;

    for (auto c : s)
    {
        if (c == '#' && !ans.size() == 0)
        {
            ans.pop_back();
        }
        else if (c != '#')
        {
            ans.push_back(c);
        }
    }

    if (k - 1 < ans.size())
    {
        cout << ans[k - 1] << endl;
    }
    else
    {
        cout << -1 << endl;
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
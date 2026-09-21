#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string a, b;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            a += s[i];
        }
        else
        {
            b += s[i];
        }
    }

    cout << a << endl;
    cout << b << endl;
}

int main()
{
    int t = 1; // cin >> t;

    while (t--)
    {
        solve();
    }
}
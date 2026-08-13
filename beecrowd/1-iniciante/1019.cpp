#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;

    ll h, m, s;
    h = t / (60 * 60);
    m = (t - h * 60 * 60) / 60;
    s = t - h * 60 * 60 - m * 60;

    cout << h << ":" << m << ":" << s << endl;
}
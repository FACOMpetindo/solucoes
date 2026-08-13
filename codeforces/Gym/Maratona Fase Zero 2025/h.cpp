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

void solve() {
    ll x;
    cin >> x;

    if (x == 1) {
        cout << 1 << endl;
        return;
    }

    int msb; //bit mais significativo
    for (int b = 60; b >= 0; b--) { //60 é o número máximo de bits
        if (x & (1ll << b)) {
            msb = b;
            break;
        }
    }
    
    if ((1ll << msb) == x) { //verificando se é uma potência de 2
        cout << x - 1 << endl; //caso seja, a resposta é x - 1
        return;
    }

    ll y = 0, l = msb, r = 0;
    while (l >= r) {
        //verificamos se conseguimos ligar os bits sem ultrapassar o valor
        ll new_y = y | (1ll << l) | (1ll << r);
        if (new_y <= x) {
            y = new_y;
        }
        l--;
        r++;
    }

    cout << y << endl;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t = 1; //cin >> t;
 
    while (t--) {
        solve();
    }
}
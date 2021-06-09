#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> f(n);
    rep(i, n) {
        ll a, b;
        cin >> a >> b;
        f.at(i) = make_pair(a, b);
    }
    sort(f.begin(), f.end());

    for (ll i = 0; i < n; i++) {
        ll t, m;
        tie(t, m) = f.at(i);
        if (k >= t) {
            k += m;
        }
    }
    
    cout << k << endl;
}
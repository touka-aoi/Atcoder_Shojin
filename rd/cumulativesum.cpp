#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ll INF = 1 << 16;
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a.at(i);
    vector<ll> cum(n+1, 0);
    rep(i, n)  {
        cum.at(i + 1) = cum.at(i) + a.at(i);
    }
    ll ans = -INF;
    for (int i = 0; i < n - k + 1; i++) {
        ans = max(cum.at(i+k) - cum.at(i), ans);
    }
    cout << ans << endl;

}
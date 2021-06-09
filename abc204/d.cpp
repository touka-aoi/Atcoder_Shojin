#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    rep(i, n) cin >> t.at(i);
    ll ans = 0;
    ll a = 0;
    ll b = 0;
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());
    rep(i, n) {
        if (a >= b) {
            b += t.at(i);
        }
        else a += t.at(i);
    }
    ans = max(a, b);
    cout << ans << endl;
}
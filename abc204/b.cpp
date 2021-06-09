#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a.at(i);
    }
    ll ans = 0;
    rep(i, n) {
        if (a.at(i) > 10) {
            ans += a.at(i) - 10;
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ll n, C;
    cin >> n >> C;
    map<ll, ll> events;
    rep (i, n) {
        ll a, b, c;
        cin >> a >> b >> c;
        events[a] += c;
        events[b + 1] -= c;
    }
    ll s = 0;
    ll ans = 0;
    ll pre = 0;
    for (auto event : events) {
        ans += min<ll>(C, s) * (event.first - pre);
        s += event.second;
        pre = event.first;
    }
    cout << ans << endl;
}
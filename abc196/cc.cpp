#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

ll doubled(ll ans) {
    string tmp;
    tmp = to_string(ans);
    return stol(tmp + tmp);
}


int main() {
    ll n;
    cin >> n;
    ll ans = 1;
    while (doubled(ans) <= n) {
        ans++;
    }
ans--;
    cout << ans << endl;
}
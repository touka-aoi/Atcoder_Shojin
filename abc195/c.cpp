#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 3; i < 16; i +=3) {
        if (n >= pow(10, i)) {
            ans += n - (pow(10, i) - 1);
        }
    }
    cout << ans << endl;
}
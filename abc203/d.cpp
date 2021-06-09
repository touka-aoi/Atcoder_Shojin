#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> a.at(i).at(j);
        }
    }

    int ans = 1 << 30;
    cout << ans;


}
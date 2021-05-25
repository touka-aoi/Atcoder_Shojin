#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    //10^9だからごり押し
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    bool flag = true;
    int ans = 0;
    while (flag) {
        rep(i, n) {
            if (a.at(i) % 2) flag = false;
            a.at(i) = a.at(i) / 2;
        }
        if (!flag) break;
        ans++;
    }
    cout << ans << endl;
}
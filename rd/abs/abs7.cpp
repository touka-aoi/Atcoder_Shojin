#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

//ソートして最大とっていく 同じの来たら飛ばす

//差があったら絶対に乗せられるからsetに入れる <- かしこい

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d.at(i);
    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());
    int ans = 0;
    int mochi = 101;
    rep(i, n) {
        if (mochi > d.at(i)) {
            ans++;
            mochi = d.at(i);
        }
    }
    cout << ans << endl;
}
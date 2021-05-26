#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

//4バイトだから$*8 = 32 - 1(1を引く) - 1(補数を引く) が最大
const int INF = 1 << 30;

int main() {
    int n; //足場
    cin >> n;
    vector<int> h(n); //高さ
    rep(i, n) cin >> h.at(i);
    vector<int> dp(n);
    rep(i, n) dp.at(i) = INF;
    dp.at(0) = 0;

    
    for (int i = 1; i < n; i++) {
        //前までが最短という前提ならこれでうまく作用する
        chmin(dp.at(i), dp.at(i - 1) + abs(h.at(i) - h.at(i - 1)));
        //ifで割るのが丸いっぽい
        if (i > 1)  chmin(dp.at(i), dp.at(i - 2) + abs(h.at(i) - h.at(i - 2)));
    }
    
    cout << dp.at(n - 1) << endl;

}
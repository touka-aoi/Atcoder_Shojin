#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

//わーかーらーなーいーよー
//とりあえずSHAYOU 
//くそうくやしいかたつむり


int main() {
    int n, m, q; // 荷物の数 箱の数 キューの数
    cin >> n >> m >> q; //入力
    vector<int> w(n), v(n); //荷物の重さ 荷物の価値
    rep(i, n) cin >> w.at(i) >> v.at(i); //入力
    vector<int> x(m); //箱の大きさ
    rep(i, m) cin >> x.at(i); // 入力
    rep(qi, q) { // キュー
        int l, r; // 入れれない箱 R - L + 1
        cin >> l >> r; // 入力
        --l, --r; // インデックスのためのデクリメント
        vector<int> as; // 入れることができる箱の集合
        rep(i, m) if (i < l || r < i) as.push_back(x.at(i)); // lより小さくてRより大きいものを入れる
        sort(as.begin(), as.end()); //ソート
        vector<bool> used(n); // 使用済みの箱フラグ
        int ans = 0; //答え
        for (int a : as) { // 使える箱の容量抽出
            P best(-1, -1); // 価値, インデックス
            rep(i, n) { 
                if (used.at(i)) continue; //使われてたらスルー
                if (w.at(i) > a) continue; //入れれなかったらスルー
                best = max(best, P(v.at(i), i)); // pairのmaxはfirstで比較される
            }
            int i = best.second; // 箱に荷物が入ったら-1以外が入る
            if (i == -1) continue; // 箱に荷物入れれないなら箱をスルー
            used.at(i) = true; // 箱使用済み :D
            ans += v.at(i); // 価値更新
        }
        cout << ans << endl; //なるほど わからん 
    }
    return 0;
}
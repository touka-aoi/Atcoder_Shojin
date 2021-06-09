#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, k;
    cin >> n >> k;
    vector a(n, vector<int>(n));
    rep(i,n)rep(j,n) cin >> a.at(i).at(j);

    int L = k * k / 2 + 1; // L 

    int wa = -1; //最小
    int ac = 1001001001; //最大
    while (wa+1 < ac) { //差が１になるまで
        int wj = (wa+ac) /2; //まず半分にする wj以下で1, 0 に分ける
        bool ok = false; //和がL([k^2/2]+1)未満のところが一つでもあるとOK
        {
            vector s(n+1, vector<int>(n+1)); //累積和用のテーブル 
            //値のコピー
            rep(i, n)rep(j, n) s.at(i+1).at(j+1) = a.at(i).at(j)>wj?1:0;
            //累積和をとる
            //二次元配列のイメージを失った > < 
            //たて よこ だよ！！
            //横から足す
            rep(i, n+1) {
                rep(j, n) {
                    s.at(i).at(j+1) += s.at(i).at(j); //先の値を更新する
                }
            }
            //縦を足す
            rep(i, n) {
                rep(j, n+1) {
                    s.at(i+1).at(j) += s.at(i).at(j); //こっちも！！
                }
            }
            //右下をみる これ書ける気がしない; ; ; ;
            rep(i, n - k + 1) {
                rep(j, n - k + 1) {
                    //右下
                    int now = s.at(i+k).at(j+k);
                    //引く
                    now -= s.at(i).at(j+k);
                    //もういっちょ引く
                    now -= s.at(i+k).at(j);
                    //引きすぎたのを足す
                    now += s.at(i).at(j);
                    if (now < L) ok = true;
                }
            ;} 
            
        }
        if(ok) ac = wj; else wa = wj; //条件によって狭める 値が大きすぎるのではないかってことか。
    }
    cout << ac << endl;
    return 0;
}
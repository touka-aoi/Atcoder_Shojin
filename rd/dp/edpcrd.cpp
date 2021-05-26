#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

//DPテンプレート
//DPっていうと怖いけどこれって最短経路問題っぽい

//なんだこれ... 全然読めない...
//templeteは型を指定しない関数 class T は テンプレートクラス <-
//bool値を返す関数
//inlineってなんだ... ???
//アンパサンドとかわからん
//<int>1 とかで渡せるってことか
//でこれは関数テンプレート
//テンプレートは型を後から入れられるもの
//参照渡し もとの変数の値を書き換える
//あとはインライン関数についてだな
//コンパイル時にべた書きされる関数
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

//無限を定義する
//1LL = long long の 1
const ll INF = 1LL << 60; //1llを60個シフトした


int main() {
    //dpテーブル
    vector<ll> dp(100000);
    //infで初期化
    rep(i, dp.size()) dp.at(i) = INF;
    //初期条件
    dp.at(0) = 0;

    
}

//定数もとれるってそういうことか
//templete<int INDEX1, int INDEX2>
//void tuple_twap(tuple<int, int, int>)
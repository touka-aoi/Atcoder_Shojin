#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

// log10 常用対数

//charとって-0引けば数字になる
//0の番号が48なのでそっから引いてるだけ

int func(string S) {
    int ret = 0;
    ret += S[0] - '0';
    ret += S[1] - '0';
    ret += S[2] - '0';
    return ret;
}

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    string a, b;
    cin >> a >> b;
    int ans = max(func(a), func(b));
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) { //ループを一つ減らす
            int rest = x - i * 500 - j * 100;
            if (rest >= 0 && (rest/50) <= c) ans++; //条件が50の倍数だから絶対割れる
        }
    }
    cout << ans << endl;
}
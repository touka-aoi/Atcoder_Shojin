#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    if (c) {
        if (b > a) flag = true;
    }
    else {
        if (b >= a) flag = true;
    }
    if(flag) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
}

//今回どっちかが勝つ状況を想定したのが賢いポイントやな
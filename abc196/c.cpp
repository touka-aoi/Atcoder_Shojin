#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    string s;
    cin >> s;
    if (s.size() / 2 != 0) {
        string temps;
        int tempi;
         temps = s.substr(s.size() / 2 + 1, s.size());
        for (int i = 0 ; i <= s.size() / 2; i ++)
        {
            tempi *= 10;
        }
        s = to_string(tempi - 1) + temps;

    }
    int a, b;
    string sb, sbb;
    sb = s.substr(0, s.size() / 2);
    sbb = s.substr(s.size() / 2, s.size());
    a = stoi(sb);
    b = stoi(sbb);
    if (b == 0) cout << a - 1 << endl;
    else if (a > b) cout << b << endl;
    else cout << a << endl;
    return 0;
}

ああああああああああああああできん
逆かぁそっかぁそっかぁ
そっかぁ

あああ逆に作ればいいのかぁ
あああああああああなるほど

おしい

おしいわ

くやしいわ

ll f(ll x) {
    string s = to_string(x);
    return stoll(s + s);
}


int main() {
    ll n;
    cin >> n;
    ll x = 1;
    while (f(x) <= n) ++x;
    ll ans = x - 1;
    cout << ans << endl;
    return 0;
}

天才的すぎる...

おわり！！
D怖い
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

//5/26解答できなかった問題 

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    vector<string> di = {"dream", "dreamer", "erase", "eraser"};
    rep(i, 4) reverse(di.at(i).begin(), di.at(i).end()); //反転
    bool ans = false;
    rep(i, s.size()) {
        ans = false;
        rep(j, 4) {
            //cout << s.substr(i, di.at(j).size()) << endl;
            if (s.substr(i, di.at(j).size()) == di.at(j)) {
                i += di.at(j).size() - 1;
                ans = true;
                break;
            }
        }
        if (ans) continue;
        else break;
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
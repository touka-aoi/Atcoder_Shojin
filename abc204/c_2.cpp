#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n); //初期化
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--; // インデックスを合わせる
        G.at(a).push_back(b);
    }
    int ans = 0;
    rep(sv, n) { // start vertex か
        vector<int> seen(n, 0);
        queue<int> q;
        q.push(sv);
        seen.at(sv) = 1;
        ans++;
        while (q.size()) {
            int front = q.front(); q.pop();
            for (int next : G.at(front)) {
                if (seen.at(next)) continue; 
                seen.at(next) = 1; // next自体はもう来たのでseenに
                ans++;
                q.push(next); // nextの次をみるためにpush
            }
        }
    }
    cout << ans << endl;
    return 0;
}
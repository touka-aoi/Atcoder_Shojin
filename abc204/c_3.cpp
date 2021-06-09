#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    //いけるところすべてをマークしていく
    //BFSをりよう

    //queueをつかう

    int n, m;
    cin >> n >> m;

    vector<vector<int>> G(n);

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G.at(a).push_back(b);   
    }

    //探索
    int ans = 0;

    rep(nv, n) {
        queue<int> q;
        vector<int> seen(n, 0);
        q.push(nv);
        seen.at(nv) = 1;
        ans++;
        while(q.size()) {
            int now = q.front(); q.pop();
            for (int x : G.at(now)){ //これは forか
                if (seen.at(x)) continue;
                seen.at(x) = 1;
                ans++;
                q.push(x);
            }
        }
    }

    cout << ans << endl;
    return 0;


}
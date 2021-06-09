#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> first_order; //行きがけ順
vector<int> last_order; //帰りがけ順

void dfs(const Graph &G, int v, int & first_ptr, int & last_ptr) {
    seen[v] = true; // Vを訪問済みにする
    // cout << v << endl; // 行きがけ
    first_order[v] = first_ptr++;
    // いけるところに再帰する
    //Gにはグラフでーた(インデックスが頂点, 中に入ってるのが次の頂点(辺))
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v, first_ptr, last_ptr); //再帰
    }

    //再帰が終わったらここに来るのか...
    //訪問回数が多いほど足されていくのね
    last_order[v] = last_ptr++;
}

int main() {
    // 超点数と辺陬
    int N, M; 
    cin >> N >> M;

    //グラフ入力受け取り
    Graph G(N);
    rep(i, M) {
            int a, b;
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
    
    //頂点0をスタートとした探索
    seen.assign(N, false); //Nこでfalseで初期化
    first_order.resize(N);
    last_order.resize(N); //リサイズ
    int first_ptr = 0, last_ptr = 0;
    dfs(G, 0, first_ptr, last_ptr);
    
    for (int v = 0; v < N; ++v) {
        cout << v << ": " << first_order[v] << ": " << last_order[v] << endl;
    }
}
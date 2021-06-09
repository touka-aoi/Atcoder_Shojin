#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

struct Edge {
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};

using Graph = vector<vctor<Edge>>;

int main() {
    int N, M; cin >> N >> M;

    Graph G(N);
    rep(i, M) {
        int from, to, weight;
        cin >> from >> to >> weight;
        G[from].push_back(Edge(to, weight))
    }
}
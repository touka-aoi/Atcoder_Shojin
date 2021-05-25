#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    rep(i, N) {
        cin >> x.at(i);
        cin >> y.at(i);
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(y.at(i) - y.at(j)) <= abs(x.at(i) - x.at(j))) {
               ans++; 
            }
        }
    }
    cout << ans << endl;
}
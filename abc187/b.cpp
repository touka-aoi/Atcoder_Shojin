#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x.at(i) >> y.at(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        // i + 1 じゃないとだめなのか...
        for (int k = i + 1; k < n; k++) {
            double tilt = (double)(y.at(k) - y.at(i)) / (x.at(k) - x.at(i));
            if (tilt >= -1 && tilt <= 1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
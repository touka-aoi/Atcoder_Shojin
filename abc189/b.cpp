#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    int n, x;
    cin >> n >> x;
    vector<double> al(n);
    rep(i, n) {
        double a, b;
        cin >> a >> b;
        al.at(i) = a * (b / 100);
    }
    int ans = 0;
    double alc = 0;
    rep(i, n) {
        alc += al.at(i);
        ans++;
        if (alc > x) {
            cout << ans << endl;    
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
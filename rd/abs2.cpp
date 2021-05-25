#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.size()) ans += (s.at(i) - '0');
    cout << ans << endl;
}
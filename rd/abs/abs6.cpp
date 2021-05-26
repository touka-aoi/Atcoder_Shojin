#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

//ソートして奇数(インデックス的には偶数)のsum - 偶数のsum = ans

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int alice = 0;
    int bob = 0;
    rep(i, n) {
        if (i % 2) bob += a.at(i);
        else alice += a.at(i);
    }
    cout << alice - bob << endl;
}
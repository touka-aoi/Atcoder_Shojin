#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        //境界ミスった
        int temp = i / 10000 + (i / 1000) % 10 + (i / 100) % 10 + (i / 10) % 10 + i % 10;
        // cout << "i :" << i << "temp :" << temp << endl;
        if (a <= temp && temp <= b) ans += i;
    }
    cout << ans << endl;
}
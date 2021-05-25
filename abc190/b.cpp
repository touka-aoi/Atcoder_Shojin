#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (s > a && b > d) flag = true;
    }
    if (flag) {
        cout << "Yes";
    }
    else cout << "No";
    cout << endl;
    return 0;
}
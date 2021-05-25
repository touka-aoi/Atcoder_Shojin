#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    //ぜんたんさー☆
    int m = 1e9;
    int M = 0;
    for (int i = 0; i <= 1000000; i++) {
        int l = a * i;
        int L = b * i;
        if (l <= w && w <= L) {
            m = min(m, i);
            M = max(M, i);
        }
    }
    if (M == 0) {
        cout << "UNSATISFIABLE" << endl;
    }
    else {
        cout << m  << " " << M << endl;
    }
}
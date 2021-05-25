#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    int l = (w  + b - 1 )/ b;
    int r = w / a;
    if (l > r) cout << "UNSATISFIABLE" << endl;
    else cout << l << " " << r << endl;
}
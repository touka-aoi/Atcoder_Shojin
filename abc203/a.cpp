#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else if (b == c) cout << a;
    else cout << 0;
    cout << endl;

}
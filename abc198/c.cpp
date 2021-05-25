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
    int ans = (n / 1000 + 1) + (n / 1000000 + 1) * 2 + (n / 1000000000 + 1) * 3 \
    + (n / 1000000000000 + 1) * 4 + (n / 1000000000000000 + 1) * 5
    cout << ans << endl;
}
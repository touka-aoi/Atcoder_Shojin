#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    string x;
    cin >> x;
    rep(i, x.size()) {
        if (x.at(i) == '.')  break;
        cout << x.at(i);
    }
    cout << endl;
    return 0;
}
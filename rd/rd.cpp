#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main () {
    vector<int> a(10);
    rep(i,10) {
        cin >> a.at(i);
    }
    rep(i,10) {
        cout << a.at(i);
    }
}
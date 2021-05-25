#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) {
        cin >> a.at(i);
    }
    rep(i, n) {
        cin >> b.at(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a.at(i) * b.at(i);
    }
    if (ans == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    // cout << (ans == 0 ? "Yes" : "No") << endl; 
    //三項演算子なんてあるんだぁ
}
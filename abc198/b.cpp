#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

string strpow(string n, int v) {
    for (int i = 0; i < v; i++) {
        n += n;
    }
    return n;
}

int main() {
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    string s;
    cin >> s;
    string sr;
    bool flag = false;
    for (int i = 0; i < 10; i++) {
        s = strpow(s, i) + s;
        sr = s;
        reverse(sr.begin(), sr.end());
        if (s == sr) {
            flag = true;
            break;
        }
        
    }
    if (flag) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
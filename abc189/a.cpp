#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    string C;
    cin >> C;
    if (C.at(0) == C.at(1) && C.at(1) == C.at(2))  {
        cout << "Won" << endl;
    }
    else {
        cout << "Lost" << endl;
    }
}
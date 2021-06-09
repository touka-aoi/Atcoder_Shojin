#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
    vector<int > a = {0, 1, 2};
   int x, y;
   cin >> x >> y;
   if (x == y) cout << x << endl;
   else if (x + y == 3) cout << 0 << endl;
   else if (x + y == 2) cout << 1 << endl;
   else if (x + y == 1) cout << 2 << endl;
}
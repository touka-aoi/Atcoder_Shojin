#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main () {
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n-1) cin >> a.at(i);
  ll s = 0;
  rep(i, n) {
    s += a.at(i);
  }
  cout << (1 + n) * n / 2  - s << endl;
}